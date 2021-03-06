//
//  remote_macro.h
//  ygcr
//
//  Created by 黄治华(Tony Wong) on 15/8/16.
//  Copyright © 2015年 黄治华. All rights reserved.
//
//  @email 908601756@qq.com
//
//  @license The MIT License (MIT)
//

/**
 * 远程服务器定义的常量
 */


//总是提交客户端类型参数，标明是什么类型的客户端
#define kTerminalTypeName           @"_terminal-type"
#define kTerminalTypeValue          @"ios"

//json返回的resultCode
#define kResultCodeFailure          [NSNumber numberWithInt:0]
#define kResultCodeSuccess          [NSNumber numberWithInt:1]
#define kResultCodeUserNotLogedin   [NSNumber numberWithInt:100]
#define kResultCodeStopOrder        [NSNumber numberWithInt:200] //系统已经停止下单

//支付类型
#define kPayTypeCash                @"1" //现金支付
#define kPayTypeWx                  @"2" //微信支付
#define kPayTypeAli                 @"3" //支付宝
//粗略的支付类型
#define kRoughPayTypeCash           @"1" //现金支付
#define kRoughPayTypeOp             @"2" //在线支付
