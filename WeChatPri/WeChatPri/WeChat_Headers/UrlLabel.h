//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMCPLabel.h"

@class NSString, UIColor;
@protocol ILinkEventExt;

@interface UrlLabel : MMCPLabel
{
    NSString *_urlString;
    NSString *_backupUrlString;
    id <ILinkEventExt> _linkDelegate;
    _Bool _ignoreHighlight;
    UIColor *_normalBackgroundColor;
    UIColor *_highlightedBackgroundColor;
    _Bool _bTouchEnds;
    id _extraInfo;
}

@property(retain, nonatomic) id extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
@property(nonatomic) _Bool ignoreHighlight; // @synthesize ignoreHighlight=_ignoreHighlight;
@property(nonatomic) __weak id <ILinkEventExt> linkDelegate; // @synthesize linkDelegate=_linkDelegate;
@property(retain, nonatomic) NSString *backupUrlString; // @synthesize backupUrlString=_backupUrlString;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)throwUrlMessage;
- (void)setHighlighted:(_Bool)arg1;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

