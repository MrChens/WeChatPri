//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VcardName : NSObject
{
    NSString *_firstName;
    NSString *_middleName;
    NSString *_lastName;
}

+ (_Bool)isChineseName:(id)arg1;
+ (_Bool)isValidName:(id)arg1;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;
- (void)print;

@end

