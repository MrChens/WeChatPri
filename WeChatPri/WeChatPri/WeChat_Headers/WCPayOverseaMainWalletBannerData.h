//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayOverseaMainWalletData.h"

@class WCPayOverseaIBGGetWalletCgiCache;

@interface WCPayOverseaMainWalletBannerData : WCPayOverseaMainWalletData
{
    WCPayOverseaIBGGetWalletCgiCache *_m_walletResp;
}

@property(retain, nonatomic) WCPayOverseaIBGGetWalletCgiCache *m_walletResp; // @synthesize m_walletResp=_m_walletResp;
- (void).cxx_destruct;
- (double)totalHeight;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;

@end

