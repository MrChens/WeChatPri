//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView;

@interface WCPayFaceHBQRCodeView : UIView
{
    UIImageView *_imageQRCodeView;
    UIImageView *_imageQRCodeEmptyView;
    NSString *m_nsQRCode;
}

- (void).cxx_destruct;
- (void)setQRCode:(id)arg1;
- (void)updateQRCode;
- (id)renderDataMatrix:(id)arg1 imageDimension:(int)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 qrWidth:(double)arg2;

@end

