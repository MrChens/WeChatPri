//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCPayGPReportUtil : NSObject
{
}

+ (void)logGroupPayIDKey:(unsigned int)arg1;
+ (void)logGroupPayDataReport:(unsigned int)arg1 chatroomMemberCount:(unsigned int)arg2 participateCount:(unsigned int)arg3 amount:(unsigned long long)arg4 theme:(id)arg5 detailData:(id)arg6;
+ (void)logGroupPayEventReport:(unsigned int)arg1;
+ (void)logGroupPayClickReport:(unsigned int)arg1 subType:(unsigned int)arg2;

@end

