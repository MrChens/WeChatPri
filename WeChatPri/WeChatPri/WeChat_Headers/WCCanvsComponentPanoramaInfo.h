//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCCanvsComponentPanoramaInfo : MMObject <NSCoding>
{
    NSString *_panoramaImageUrl;
}

@property(retain, nonatomic) NSString *panoramaImageUrl; // @synthesize panoramaImageUrl=_panoramaImageUrl;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

