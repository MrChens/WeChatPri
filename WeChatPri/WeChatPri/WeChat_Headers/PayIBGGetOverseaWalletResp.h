//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString, WalletGrayArea, WalletNotice, WalletThreePointArea, WalletTitle;

@interface PayIBGGetOverseaWalletResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseresponse; // @dynamic baseresponse;
@property(nonatomic) _Bool canSwitchWallet; // @dynamic canSwitchWallet;
@property(nonatomic) int errcode; // @dynamic errcode;
@property(retain, nonatomic) NSString *errmsg; // @dynamic errmsg;
@property(retain, nonatomic) WalletGrayArea *walletGrayArea; // @dynamic walletGrayArea;
@property(retain, nonatomic) WalletNotice *walletNotice; // @dynamic walletNotice;
@property(nonatomic) unsigned int walletRegion; // @dynamic walletRegion;
@property(retain, nonatomic) NSString *walletRegionDesc; // @dynamic walletRegionDesc;
@property(retain, nonatomic) NSMutableArray *walletRegionDescArray; // @dynamic walletRegionDescArray;
@property(retain, nonatomic) WalletThreePointArea *walletThreepointArea; // @dynamic walletThreepointArea;
@property(retain, nonatomic) WalletTitle *walletTitle; // @dynamic walletTitle;

@end

