//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface WebViewMenuItem : NSObject
{
    NSString *_itemID;
    NSString *_title;
    NSString *_url;
    UIImage *_iconImage;
    NSString *_key;
}

@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (void)setTitleWithID:(id)arg1;
- (id)init;

@end

