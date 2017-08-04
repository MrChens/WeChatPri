//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ICdnComMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class FavoritesCDNInfo, FavoritesItem, NSString;
@protocol FavoritesAsyncUploaderDelegate;

@interface FavoritesAsyncUploader : MMObject <PBMessageObserverDelegate, ICdnComMgrExt>
{
    FavoritesItem *_favItem;
    id <FavoritesAsyncUploaderDelegate> _delegate;
    int _runningState;
    FavoritesCDNInfo *_uploadingInfo;
}

@property(nonatomic) __weak id <FavoritesAsyncUploaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleModifyFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)BroadcastUploadFail:(int)arg1;
- (void)tryStartNextData;
- (void)doModifyItemCGI:(id)arg1;
- (id)updateFavoritesItemCDNInfo;
- (id)getItem;
- (_Bool)stop;
- (void)run;
- (void)dealloc;
- (id)initWithFavoritesItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

