//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "StoreEmotionBaseCgi.h"

@class SKBuiltinBuffer_t;
@protocol StoreEmotionGetEmotionListCgiDelegate;

@interface StoreEmotionGetEmotionListCgi : StoreEmotionBaseCgi
{
    unsigned int m_reqType;
    unsigned int m_scene;
    unsigned int m_category;
    SKBuiltinBuffer_t *m_reqBuf;
    id <StoreEmotionGetEmotionListCgiDelegate> _delegate;
}

@property(nonatomic) __weak id <StoreEmotionGetEmotionListCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleErrorReturn;
- (void)handleMessageReturnWithResponse:(id)arg1;
- (_Bool)startRequest;
@property(readonly, nonatomic) _Bool hasMore;
- (id)initWithReqType:(unsigned int)arg1 Scene:(unsigned int)arg2 Category:(unsigned int)arg3;
- (id)initWithReqType:(unsigned int)arg1 Scene:(unsigned int)arg2;

@end

