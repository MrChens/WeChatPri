//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface PushMailWrap : NSObject <NSCopying>
{
    NSString *nsSender;
    NSString *nsSenderAddress;
    NSString *nsSubject;
    NSString *nsDigest;
    NSString *nsDate;
    NSString *nsWapLink;
    NSString *nsMailID;
    NSString *nsAccount;
    NSString *nsArgs;
    unsigned long long uiUin;
    _Bool bHasAttachment;
    NSMutableArray *arrToList;
    NSMutableArray *arrCCList;
}

@property(retain, nonatomic) NSMutableArray *arrCCList; // @synthesize arrCCList;
@property(retain, nonatomic) NSMutableArray *arrToList; // @synthesize arrToList;
@property(nonatomic) unsigned long long uiUin; // @synthesize uiUin;
@property(nonatomic) _Bool bHasAttachment; // @synthesize bHasAttachment;
@property(retain, nonatomic) NSString *nsArgs; // @synthesize nsArgs;
@property(retain, nonatomic) NSString *nsAccount; // @synthesize nsAccount;
@property(retain, nonatomic) NSString *nsMailID; // @synthesize nsMailID;
@property(retain, nonatomic) NSString *nsWapLink; // @synthesize nsWapLink;
@property(retain, nonatomic) NSString *nsDate; // @synthesize nsDate;
@property(retain, nonatomic) NSString *nsDigest; // @synthesize nsDigest;
@property(retain, nonatomic) NSString *nsSubject; // @synthesize nsSubject;
@property(retain, nonatomic) NSString *nsSenderAddress; // @synthesize nsSenderAddress;
@property(retain, nonatomic) NSString *nsSender; // @synthesize nsSender;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

