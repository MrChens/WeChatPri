//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDCHostItem : NSObject
{
    NSString *origin;
    NSString *substitute;
    int priority;
}

@property(nonatomic) int priority; // @synthesize priority;
@property(retain, nonatomic) NSString *substitute; // @synthesize substitute;
@property(retain, nonatomic) NSString *origin; // @synthesize origin;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOrigin:(id)arg1 Substitute:(id)arg2 Priority:(int)arg3;
- (id)init;

@end

