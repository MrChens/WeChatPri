//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QBUtils : NSObject
{
}

+ (_Bool)isQBWKWebViewExist;
+ (void)markQBWKWebViewExist:(_Bool)arg1;
+ (_Bool)isQBUIWebViewExist;
+ (void)markQBUIWebViewExist:(_Bool)arg1;
+ (_Bool)isExpired:(id)arg1;
+ (id)stringByRemovingPercentString:(id)arg1;
+ (id)cookiesByURL:(id)arg1;
+ (id)stringByConvertToCFURL:(id)arg1;
+ (id)des:(id)arg1 WithKey:(id)arg2;
+ (id)AES128Decrypt:(id)arg1 WithKey:(id)arg2;
+ (id)AES128Encrypt:(id)arg1 WithKey:(id)arg2;
+ (id)AES128:(id)arg1 Operation:(unsigned int)arg2 key:(id)arg3;
+ (id)mttHexString:(id)arg1;
+ (id)mttDataWithHexString:(id)arg1;
+ (void)setInDic:(id)arg1 key:(id)arg2 intervalValue:(double)arg3;
+ (void)setInDic:(id)arg1 key:(id)arg2 boolValue:(_Bool)arg3;
+ (void)setInDic:(id)arg1 key:(id)arg2 urlValue:(id)arg3;
+ (void)setInDic:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)host:(id)arg1;
+ (_Bool)isString:(id)arg1 absoluteEqualToString:(id)arg2;
+ (_Bool)originUrl:(id)arg1 isEqualIgorningFragment:(id)arg2;
+ (id)originData:(id)arg1 _runCryptor:(struct _CCCryptor *)arg2 result:(int *)arg3;
+ (id)originData:(id)arg1 decryptedDataUsingAlgorithm:(unsigned int)arg2 key:(id)arg3 initializationVector:(id)arg4 options:(unsigned int)arg5 error:(int *)arg6;
+ (id)originData:(id)arg1 encryptedUsingAlgorithm:(unsigned int)arg2 key:(id)arg3 initializationVector:(id)arg4 options:(unsigned int)arg5 error:(int *)arg6;
+ (_Bool)isIpUrl:(id)arg1;

@end

