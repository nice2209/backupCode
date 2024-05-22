import time
import pyautogui

def main():
    # 사용자로부터 입력 받기
    message = input("원하는 말을 입력하세요: ")

    # 반복 횟수 입력 받기
    try:
        repeat_count = int(input("메세지를 몇 번 보낼까요? "))
    except ValueError:
        print("올바른 숫자를 입력하세요.")
        return


    print("5초 후에 시작됩니다. 원하는 곳으로 커서를 이동하세요.")
    time.sleep(5)
    for _ in range(repeat_count):
        pyautogui.typewrite(message)
        pyautogui.press("enter")
        time.sleep(0.1)  # 보내는 간격을 조절할 수 있습니다.

if __name__ == "__main__":
    main()