#include <windows.h>

const char g_szClassName[]= "laClaseVentana";

//4to. Paso: Invocacion a procedimiento Window
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
switch(msg)
    {
    case WM_CLOSE:
    DestroyWindow(hwnd);
    break;
    
    case WM_DESTROY:
    PostQuitMessage(0);
    break;
    default:
    return DefWindowProc(hwnd,msg,wParam,lParam);
    }
 return 0;

}


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)

{
    WNDCLASSEX wc;
    HWND hwnd;
    MSG Msg;
    
//1er. paso: registro de la clase Window

wc.cbSize= sizeof(WNDCLASSEX);
wc.style=0;
wc.lpfnWndProc=WndProc;
wc.cbClsExtra=0;
wc.cbWndExtra=0;
wc.hInstance=hInstance;
wc.hIcon=LoadIcon(NULL, IDI_APPLICATION);
wc.hCursor=LoadCursor(NULL, IDC_ARROW);
wc.hbrBackground=(HBRUSH)(COLOR_WINDOW+1);
wc.lpszMenuName=NULL;
wc.lpszClassName=g_szClassName;
wc.hIconSm=LoadIcon(NULL, IDI_APPLICATION);

if(!RegisterClassEx(&wc))
{
    MessageBox(NULL, "Falla al registrar la ventana", "Error!", MB_ICONEXCLAMATION | MB_OK);
    return 0;
}

//2do. Paso: creacion de la ventana

hwnd=CreateWindowEx(
WS_EX_CLIENTEDGE, 
g_szClassName,
"TCH",
WS_OVERLAPPEDWINDOW,
CW_USEDEFAULT, CW_USEDEFAULT, 240, 120,
NULL, NULL, hInstance, NULL);

if(hwnd==NULL)

{
    MessageBox(NULL, "Falla en la creacion de la ventana", "Error!", MB_ICONEXCLAMATION | MB_OK);
    return 0;
}

ShowWindow(hwnd, nCmdShow);
UpdateWindow(hwnd);

//3er paso: ciclo del mensaje

while(GetMessage(&Msg, NULL, 0,0)>0)

{
    TranslateMessage(&Msg);
    DispatchMessage(&Msg);
}
return Msg.wParam;
}   
