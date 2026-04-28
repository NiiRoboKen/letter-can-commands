# letter-can-commands

letter-canの未使用領域を使用したコマンドのフォーマット、及びそのフォーマットの共通コマンド群。

## フォーマット

```plaintext
| Pb (1) | category (4) | command (8) |
```

### Pb

Priority bit. 0で優先、1で通常。

### category

| category | num |
| --- | --- |
| CONTROL | 0x0 |
| CONTROL_RESPONSE | 0x2 |
| NOTICE | 0x1 |
| CONFIG | 0x3 |
| CONFIG_RESPONSE | 0x4 |
| INFO_REQUEST | 0x5 |
| INFO_RESPONSE | 0x6 |
| DEBUG | 0x7 |

## common commands

フォーマットを使用するノード共通のコマンド。

| command | Pb | category | num(command) | num(all) | function |
| --- | --- | --- | --- | --- | --- |
| START | 1 | CONTROL | 0x00 | 0x1000 | 起動命令 |
| START_REPORT | 1 | CONTROL_RESPONSE | 0x00 | 0x1200 | 起動報告 |
| KILL | 0 | CONTROL | 0x01 | 0x0001 | 終了命令 |
| KILL_REPORT | 1 | CONTROL_RESPONSE | 0x01 | 0x1201 | 終了報告 |
| ERROR | 0 | NOTICE | 0x00 | 0x0100 | 異常通知 |
| PING | 1 | INFO_REQUEST | 0x00 | 0x1500 | 疎通確認 |
| PONG | 1 | INFO_RESPONSE | 0x00 | 0x1600 | 疎通応答 |
