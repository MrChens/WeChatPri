//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "POPAnimatableProperty.h"

@class NSString;

@interface POPConcreteAnimatableProperty : POPAnimatableProperty
{
    NSString *name;
    CDUnknownBlockType readBlock;
    CDUnknownBlockType writeBlock;
    double threshold;
}

- (double)threshold;
- (CDUnknownBlockType)writeBlock;
- (CDUnknownBlockType)readBlock;
- (id)name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 readBlock:(CDUnknownBlockType)arg2 writeBlock:(CDUnknownBlockType)arg3 threshold:(double)arg4;

@end

