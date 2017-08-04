//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasComponent.h"

#import "RichTextLayoutDelegate-Protocol.h"
#import "WCCanvasImageLoaderObserver-Protocol.h"

@class NSString, RichTextView;

@interface WCCanvasTextAreaComponent : WCCanvasComponent <RichTextLayoutDelegate, WCCanvasImageLoaderObserver>
{
    RichTextView *_contentLabel;
}

+ (struct CGSize)calcContentSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3 width:(double)arg4;
+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
+ (id)getRichTextFromSvrResponse:(id)arg1;
@property(retain, nonatomic) RichTextView *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)downloadAllIconImage;
- (void)adjustOneLineStyles:(id)arg1 inRect:(struct CGRect)arg2;
- (void)alignTextToCenter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

