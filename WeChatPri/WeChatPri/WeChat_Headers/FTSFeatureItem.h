//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FTSFeatureItem : NSObject
{
    unsigned int _featureID;
    int _pluginType;
    NSString *_title;
    NSString *_titlePY;
    NSString *_titleShortPY;
    NSString *_tag;
    NSString *_actionType;
    NSString *_actionUrl;
    NSString *_helpUrl;
    NSString *_updateUrl;
}

@property(nonatomic) int pluginType; // @synthesize pluginType=_pluginType;
@property(retain, nonatomic) NSString *updateUrl; // @synthesize updateUrl=_updateUrl;
@property(retain, nonatomic) NSString *helpUrl; // @synthesize helpUrl=_helpUrl;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *titleShortPY; // @synthesize titleShortPY=_titleShortPY;
@property(retain, nonatomic) NSString *titlePY; // @synthesize titlePY=_titlePY;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int featureID; // @synthesize featureID=_featureID;
- (void).cxx_destruct;
- (_Bool)shouldJumpWeApp;
- (_Bool)shouldJumpNative;
- (_Bool)shouldJumpWeb;
- (id)init;

@end

