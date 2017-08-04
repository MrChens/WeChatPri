//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CBService, NSArray, NSString;

@protocol IWAJSContextBlueToothProtocol <NSObject>

@optional
- (void)onBluetoothCharacteristicsDidSetNotify:(NSString *)arg1 service:(NSString *)arg2 device:(NSString *)arg3 errorCode:(int)arg4 errMsg:(NSString *)arg5 appid:(NSString *)arg6;
- (void)onBluetoothCharacteristicsDidWrite:(NSString *)arg1 service:(NSString *)arg2 device:(NSString *)arg3 errorCode:(int)arg4 errMsg:(NSString *)arg5 appid:(NSString *)arg6;
- (void)onBluetoothCharacteristicsDiscovered:(NSArray *)arg1 service:(CBService *)arg2 device:(NSString *)arg3 errorCode:(int)arg4 errMsg:(NSString *)arg5 appid:(NSString *)arg6;
- (void)onBluetoothServicesDiscovered:(NSArray *)arg1 device:(NSString *)arg2 errorCode:(int)arg3 errMsg:(NSString *)arg4 appid:(NSString *)arg5;
- (void)onBluetoothDisConnected:(NSString *)arg1 errorCode:(int)arg2 errMsg:(NSString *)arg3 appid:(NSString *)arg4;
- (void)onBluetoothConnected:(NSString *)arg1 errorCode:(int)arg2 errMsg:(NSString *)arg3 appid:(NSString *)arg4;
- (void)onBluetoothStartScan:(int)arg1 errMsg:(NSString *)arg2 appid:(NSString *)arg3;
- (void)onBluetoothStateChange:(int)arg1 errMsg:(NSString *)arg2;
- (void)onBluetoothLibCloseForAppid:(NSString *)arg1;
- (void)onBluetoothLibOpen:(long long)arg1 appid:(NSString *)arg2;
@end

