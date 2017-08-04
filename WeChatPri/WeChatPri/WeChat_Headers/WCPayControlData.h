//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BalanceMobileInfo, CContact, CMessageWrap, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSString, TenpayBindCardInfo, TenpayBindCardSubscribeAppInfo, WCPayAppAuthRequestStruct, WCPayAuthenticationPay, WCPayAuthenticationPayStatusStruct, WCPayAuthenticationPayVerifySMSStruct, WCPayBalanceInfo, WCPayBannerNotice, WCPayBindCardInfo, WCPayBindInfo, WCPayBindUserInfo, WCPayCardBinInfo, WCPayControlDataGroupPayData, WCPayCreditCardInfo, WCPayFetchInfo, WCPayGetUserExInfoCgiResponse, WCPayIAPOrderDetail, WCPayLoanEntryInfo, WCPayMultiOrderDetail, WCPayNoticeInfo, WCPayOfflinePayChangeLimitFeeRequestStruct, WCPayOfflinePayQueryInfo, WCPayOfflinePayQueryInfoRequest, WCPayPayMenuArrayInfo, WCPayRealnameGuideInfo, WCPayResetPasswordInfo, WCPaySetUserExInfoCgiRequest, WCPaySwitchInfo, WCPayTransferPrepayRequestStruct, WCPayUserInfo, WCPayVirtualNoBindCard, WCPayWalletInfo;

@interface WCPayControlData : NSObject
{
    NSString *nsCardHodlerName;
    NSString *nsCardHodlerCredit;
    NSString *nsCardHodlerIdentifyCard;
    NSString *nsCardNumber;
    NSString *nsPhoneNumber;
    NSString *nsResetPhoneNumber;
    NSString *nsResetCVVCode;
    NSString *nsCVVCode;
    NSString *nsResetValidDate;
    NSString *nsValidDate;
    NSString *nsPhoneVerifyCode;
    NSString *nsPayPasswd;
    NSString *nsRepeatPayPasswd;
    NSString *nsVerifiedPasswd;
    NSString *nsSaveBalanceMoney;
    NSString *nsFetchBalanceMoney;
    NSString *nsTransferMoney;
    NSString *nsTransferExtMoney;
    NSString *nsFetchArriveTime;
    _Bool m_bAutoFilledCardInfo;
    NSString *nsTransferRemark;
    NSString *nsWCLanguage;
    NSString *nsFirstName;
    NSString *nsLastName;
    NSString *nsCountry;
    NSString *nsArea;
    NSString *nsCity;
    NSString *nsAddress;
    NSString *nsPhoneNumber_Overseas;
    NSString *nsZipCode;
    NSString *nsEmail;
    NSString *nsCreditPayFirstName;
    NSString *nsCreditPayLast4IDNumber;
    NSString *nsCreditPayName;
    NSString *nsCreditPayIDNumber;
    unsigned int uiFlag;
    unsigned int uiPayScene;
    unsigned int uiBindScene;
    unsigned int uiJSApiPayScene;
    NSString *nsOrderID;
    NSString *nsUUID;
    NSString *nsImportCode;
    NSString *nsProductsID;
    NSString *nsBindSerial;
    NSString *m_nsToken;
    NSString *nsServiceAppID;
    NSString *nsServiceAppUserName;
    NSString *nsServiceAppName;
    NSString *nsServiceAppLogoUrl;
    NSString *nsServiceDetail;
    NSString *nsServiceSubscribeUrl;
    NSString *nsWapPayUrl;
    NSString *nsShareToFriendURL;
    NSString *nsPaidSuccessDetail;
    int uiServiceSubscribeStrategy;
    NSString *nsAppName;
    NSString *nsAppID;
    NSString *nsAppSource;
    WCPayAppAuthRequestStruct *structAppAuthRequest;
    WCPayBindUserInfo *bindUserInfo;
    unsigned int uiCardBankTag;
    NSError *m_oPaidError;
    WCPayAuthenticationPay *m_structAuthenticationPay;
    WCPayAuthenticationPayVerifySMSStruct *m_structAuthenticationPayVerifySMS;
    WCPayResetPasswordInfo *m_structResetPayPasswordInfo;
    NSArray *m_arrTenpayImportBindCard;
    TenpayBindCardInfo *m_structSelectedTenpayBindCardInfo;
    TenpayBindCardSubscribeAppInfo *m_structSelectedTenpayBindCardSubscribeAppInfo;
    WCPayBindInfo *m_structBindInfo;
    NSArray *m_arrBindedCard;
    NSArray *m_arrHistoryCard;
    NSArray *m_arrVirtualNoBindCard;
    NSArray *m_arrWXBorrowMoneyItemList;
    WCPayBindCardInfo *m_structSelectedCardInfo;
    WCPayBindCardInfo *m_structSelectedResetBalanceTelCardInfo;
    WCPayUserInfo *m_structUserInfo;
    WCPaySwitchInfo *m_structSwitchInfo;
    WCPayBalanceInfo *m_structBalanceInfo;
    WCPayNoticeInfo *m_structNoticeInfo;
    WCPayCardBinInfo *m_structSelectedCardType;
    NSArray *m_arrAvailableBank;
    WCPayIAPOrderDetail *m_structIAPOrderDetail;
    WCPayMultiOrderDetail *m_structOrderDetail;
    NSMutableArray *m_arrStatusChangeOrderArray;
    NSMutableArray *m_arrOrderArray;
    NSMutableArray *m_arrNotifyMsgArray;
    WCPayAuthenticationPayStatusStruct *m_structAuthenticationPayStatus;
    WCPayVirtualNoBindCard *m_structVirtualCardInfo;
    NSDate *startPayDate;
    NSDate *startVerifySMSDate;
    _Bool bNeedGetSMSAgain;
    NSString *nsOfflinePayQRCode;
    NSString *nsOfflinepayBarCode;
    _Bool m_bNeedOfflinePayLoading;
    long long uiOfflinePayLimit;
    long long offlinePayAmount;
    long long offlinePayNumber;
    long long uiOfflinePayChangedLimit;
    WCPayOfflinePayChangeLimitFeeRequestStruct *m_structWCPayOfflinePayChangeLimitFeeRequestStruct;
    NSString *nsOfflinePayConfirmViewTips;
    WCPayOfflinePayQueryInfo *m_structWCPayOfflinePayQueryInfo;
    unsigned int uiInitalMoney;
    WCPayOfflinePayQueryInfoRequest *m_sturctWCPayOfflinePayQueryInfoRequest;
    int m_enWCPayOfflinePayCodeDisplayScene;
    _Bool m_bBankUser;
    NSString *m_nsSessionKey;
    _Bool m_bNeedBind;
    NSString *m_nsIDNumberMask;
    NSString *m_nsNameMask;
    NSArray *m_arrIncreaseLimitQuestionArray;
    WCPayCreditCardInfo *m_sturctWCPayCreditCardInfo;
    unsigned int m_uiQueryQuestionCnt;
    CContact *m_oSelectedContact;
    NSString *m_nsSelectedUserNameFromQRCode;
    NSString *m_nsSelectedTruthNameFromQRCode;
    NSString *m_nsControlTransationID;
    NSString *m_nsTransferID;
    NSString *m_nsCurrentUserName;
    NSString *m_nsTranferMoneyString;
    unsigned long long m_uiTransferInvalidTime;
    unsigned int m_uiEffectiveDate;
    WCPayTransferPrepayRequestStruct *m_oWCPayTransferPrepayRequestStruct;
    NSMutableArray *m_arrFacingReceiveMoneyPayer;
    unsigned int m_uiStepInFacingReceiveViewTimestamp;
    NSString *m_nsFixedAmountReceiveMoneyQRCode;
    NSString *m_nsFixedAmountReceiveMoneyDesc;
    long long m_llFixedAmountReceiveMoneyTotalMoney;
    int m_enWCPayFacingReceiveMoneyScene;
    NSString *m_nsFacingPaidID;
    NSString *m_nsInterruptDesc;
    unsigned int m_uiHasUnarriveMoney;
    unsigned int m_uiChargeFee;
    unsigned int m_uiAccFee;
    unsigned int m_uiFeeLimit;
    unsigned int m_uiRemainFee;
    unsigned int m_uiExceedFee;
    NSString *m_nsChargeRate;
    NSString *m_nsTransferInterruptChargeDesc;
    unsigned int m_uiUsedFee;
    _Bool m_isShowCharge;
    NSString *m_nsChargeDesc;
    NSString *m_nsChargeShortDesc;
    unsigned int m_uiShortRemainFee;
    NSString *m_c2c_sender_title;
    NSString *m_c2c_receiver_title;
    NSString *m_c2c_des;
    NSString *m_c2c_sender_des;
    NSString *m_c2c_receiver_des;
    NSString *m_c2c_url;
    NSString *m_c2c_templateId;
    unsigned int m_c2c_sceneId;
    WCPayLoanEntryInfo *m_loanEntryInfo;
    NSString *m_loanJsApiToken;
    unsigned int m_uiPayChannel;
    int m_uiPayEntry;
    unsigned int m_uiRealnameActionFlag;
    NSString *m_nsRealnameToken;
    WCPayWalletInfo *m_walletInfo;
    NSArray *m_arrAvailableWalletInfo;
    NSDictionary *m_dicBanners;
    NSString *m_nsTransferReceiverTrueName;
    _Bool isAutoDeduct;
    WCPayRealnameGuideInfo *realnameInfo;
    int realnameScene;
    CMessageWrap *m_oSelectedMessageWrap;
    _Bool bNeedInputNewTelToResetBalanceTel;
    _Bool _m_bTouchIDAuthOrder;
    _Bool _openChangeRealName;
    _Bool _bIsBindNewCardToPay;
    unsigned int m_pay_msg_type;
    int _m_enWCPayFacingReceiveMoneyRegion;
    unsigned int _m_uiFetchChargeFee;
    unsigned int _m_walletType;
    int _m_currency;
    long long m_placeHolderMoney;
    NSString *m_nsTransferMoneySuccessMsgContent;
    WCPayCardBinInfo *m_structSelectedResetBalanceTelCardType;
    NSArray *m_arrBalanceNotice;
    NSArray *m_arrFetchNotice;
    WCPayPayMenuArrayInfo *m_payMenuArrayInfo;
    WCPayFetchInfo *_m_structFetchInfo;
    NSArray *_offlinePayCardIcons;
    NSString *_m_nsFacingReceivePayerDesc;
    double _expiredTimeToPopOfflinePayForCard;
    CDUnknownBlockType _offlinePayReturnBlock;
    NSDictionary *_shareCardStatDic;
    NSString *_m_uifaceTofaceName;
    NSString *_m_uifaceTofaceDescTitle;
    NSString *_m_uifaceTofacePayerDescTitle;
    WCPayControlDataGroupPayData *_groupPayData;
    NSString *_m_uiBalanceMobile;
    NSArray *_balanceMobileInfos;
    BalanceMobileInfo *_selectedBalanceMobileInfo;
    WCPayBindCardInfo *_autoDeductSelectedCardInfo;
    unsigned long long _startTrackTimeInMs;
    unsigned long long _payOrReceiveFromScene;
    WCPayGetUserExInfoCgiResponse *_getUserExInfoCgiResponse;
    WCPaySetUserExInfoCgiRequest *_setUserExInfoRequest;
    CMessageWrap *_m_oSelectedMessageWrap;
    NSString *_m_feeType;
    unsigned long long _m_transferTotalAmount;
    NSString *_m_receiverNickName;
    NSString *_m_receiverUserName;
    NSString *_m_payerNickname;
    NSString *_m_f2fRecevieMultipleWalletTitle;
    NSString *_m_f2fReceiveBottomDetailTitle;
    WCPayBannerNotice *_m_bannerNotice;
}

@property(nonatomic) _Bool bIsBindNewCardToPay; // @synthesize bIsBindNewCardToPay=_bIsBindNewCardToPay;
@property(retain, nonatomic) WCPayBannerNotice *m_bannerNotice; // @synthesize m_bannerNotice=_m_bannerNotice;
@property(retain, nonatomic) NSString *m_f2fReceiveBottomDetailTitle; // @synthesize m_f2fReceiveBottomDetailTitle=_m_f2fReceiveBottomDetailTitle;
@property(retain, nonatomic) NSString *m_f2fRecevieMultipleWalletTitle; // @synthesize m_f2fRecevieMultipleWalletTitle=_m_f2fRecevieMultipleWalletTitle;
@property(nonatomic) int m_currency; // @synthesize m_currency=_m_currency;
@property(retain, nonatomic) NSString *m_payerNickname; // @synthesize m_payerNickname=_m_payerNickname;
@property(retain, nonatomic) NSString *m_receiverUserName; // @synthesize m_receiverUserName=_m_receiverUserName;
@property(retain, nonatomic) NSString *m_receiverNickName; // @synthesize m_receiverNickName=_m_receiverNickName;
@property(nonatomic) unsigned long long m_transferTotalAmount; // @synthesize m_transferTotalAmount=_m_transferTotalAmount;
@property(retain, nonatomic) NSString *m_feeType; // @synthesize m_feeType=_m_feeType;
@property(nonatomic) unsigned int m_walletType; // @synthesize m_walletType=_m_walletType;
@property(retain, nonatomic) CMessageWrap *m_oSelectedMessageWrap; // @synthesize m_oSelectedMessageWrap=_m_oSelectedMessageWrap;
@property(retain, nonatomic) WCPaySetUserExInfoCgiRequest *setUserExInfoRequest; // @synthesize setUserExInfoRequest=_setUserExInfoRequest;
@property(retain, nonatomic) WCPayGetUserExInfoCgiResponse *getUserExInfoCgiResponse; // @synthesize getUserExInfoCgiResponse=_getUserExInfoCgiResponse;
@property(nonatomic) unsigned long long payOrReceiveFromScene; // @synthesize payOrReceiveFromScene=_payOrReceiveFromScene;
@property(nonatomic) _Bool openChangeRealName; // @synthesize openChangeRealName=_openChangeRealName;
@property(nonatomic) unsigned long long startTrackTimeInMs; // @synthesize startTrackTimeInMs=_startTrackTimeInMs;
@property(retain, nonatomic) WCPayBindCardInfo *autoDeductSelectedCardInfo; // @synthesize autoDeductSelectedCardInfo=_autoDeductSelectedCardInfo;
@property(retain, nonatomic) BalanceMobileInfo *selectedBalanceMobileInfo; // @synthesize selectedBalanceMobileInfo=_selectedBalanceMobileInfo;
@property(retain, nonatomic) NSArray *balanceMobileInfos; // @synthesize balanceMobileInfos=_balanceMobileInfos;
@property(retain, nonatomic) NSString *m_uiBalanceMobile; // @synthesize m_uiBalanceMobile=_m_uiBalanceMobile;
@property(retain, nonatomic) WCPayControlDataGroupPayData *groupPayData; // @synthesize groupPayData=_groupPayData;
@property(retain, nonatomic) NSString *m_uifaceTofacePayerDescTitle; // @synthesize m_uifaceTofacePayerDescTitle=_m_uifaceTofacePayerDescTitle;
@property(retain, nonatomic) NSString *m_uifaceTofaceDescTitle; // @synthesize m_uifaceTofaceDescTitle=_m_uifaceTofaceDescTitle;
@property(retain, nonatomic) NSString *m_uifaceTofaceName; // @synthesize m_uifaceTofaceName=_m_uifaceTofaceName;
@property(nonatomic) unsigned int m_uiFetchChargeFee; // @synthesize m_uiFetchChargeFee=_m_uiFetchChargeFee;
@property(retain, nonatomic) NSDictionary *shareCardStatDic; // @synthesize shareCardStatDic=_shareCardStatDic;
@property(copy, nonatomic) CDUnknownBlockType offlinePayReturnBlock; // @synthesize offlinePayReturnBlock=_offlinePayReturnBlock;
@property(nonatomic) double expiredTimeToPopOfflinePayForCard; // @synthesize expiredTimeToPopOfflinePayForCard=_expiredTimeToPopOfflinePayForCard;
@property(nonatomic) _Bool m_bTouchIDAuthOrder; // @synthesize m_bTouchIDAuthOrder=_m_bTouchIDAuthOrder;
@property(retain, nonatomic) NSString *m_nsFacingReceivePayerDesc; // @synthesize m_nsFacingReceivePayerDesc=_m_nsFacingReceivePayerDesc;
@property(nonatomic) int m_enWCPayFacingReceiveMoneyRegion; // @synthesize m_enWCPayFacingReceiveMoneyRegion=_m_enWCPayFacingReceiveMoneyRegion;
@property(retain, nonatomic) NSArray *offlinePayCardIcons; // @synthesize offlinePayCardIcons=_offlinePayCardIcons;
@property(retain, nonatomic) WCPayFetchInfo *m_structFetchInfo; // @synthesize m_structFetchInfo=_m_structFetchInfo;
@property(retain, nonatomic) WCPayPayMenuArrayInfo *m_payMenuArrayInfo; // @synthesize m_payMenuArrayInfo;
@property(nonatomic) unsigned int m_pay_msg_type; // @synthesize m_pay_msg_type;
@property(retain, nonatomic) NSArray *m_arrFetchNotice; // @synthesize m_arrFetchNotice;
@property(retain, nonatomic) NSArray *m_arrBalanceNotice; // @synthesize m_arrBalanceNotice;
@property(nonatomic) int realnameScene; // @synthesize realnameScene;
@property(retain, nonatomic) WCPayRealnameGuideInfo *realnameInfo; // @synthesize realnameInfo;
@property(nonatomic) _Bool isAutoDeduct; // @synthesize isAutoDeduct;
@property(retain, nonatomic) NSString *m_nsTransferReceiverTrueName; // @synthesize m_nsTransferReceiverTrueName;
@property(retain, nonatomic) NSDictionary *m_dicBanners; // @synthesize m_dicBanners;
@property(retain, nonatomic) NSArray *m_arrAvailableWalletInfo; // @synthesize m_arrAvailableWalletInfo;
@property(retain, nonatomic) WCPayWalletInfo *m_walletInfo; // @synthesize m_walletInfo;
@property(retain, nonatomic) NSString *m_nsRealnameToken; // @synthesize m_nsRealnameToken;
@property(nonatomic) unsigned int m_uiRealnameActionFlag; // @synthesize m_uiRealnameActionFlag;
@property(nonatomic) int m_uiPayEntry; // @synthesize m_uiPayEntry;
@property(nonatomic) unsigned int m_uiPayChannel; // @synthesize m_uiPayChannel;
@property(nonatomic) unsigned int m_uiShortRemainFee; // @synthesize m_uiShortRemainFee;
@property(retain, nonatomic) NSString *m_nsChargeShortDesc; // @synthesize m_nsChargeShortDesc;
@property(retain, nonatomic) NSString *m_nsChargeDesc; // @synthesize m_nsChargeDesc;
@property(nonatomic) _Bool m_isShowCharge; // @synthesize m_isShowCharge;
@property(nonatomic) unsigned int m_uiUsedFee; // @synthesize m_uiUsedFee;
@property(retain, nonatomic) NSString *m_nsTransferInterruptChargeDesc; // @synthesize m_nsTransferInterruptChargeDesc;
@property(retain, nonatomic) NSString *m_nsChargeRate; // @synthesize m_nsChargeRate;
@property(nonatomic) unsigned int m_uiExceedFee; // @synthesize m_uiExceedFee;
@property(nonatomic) unsigned int m_uiRemainFee; // @synthesize m_uiRemainFee;
@property(nonatomic) unsigned int m_uiFeeLimit; // @synthesize m_uiFeeLimit;
@property(nonatomic) unsigned int m_uiAccFee; // @synthesize m_uiAccFee;
@property(nonatomic) unsigned int m_uiChargeFee; // @synthesize m_uiChargeFee;
@property(retain, nonatomic) NSString *m_loanJsApiToken; // @synthesize m_loanJsApiToken;
@property(retain, nonatomic) WCPayLoanEntryInfo *m_loanEntryInfo; // @synthesize m_loanEntryInfo;
@property(nonatomic) unsigned int m_uiHasUnarriveMoney; // @synthesize m_uiHasUnarriveMoney;
@property(retain, nonatomic) NSString *m_nsInterruptDesc; // @synthesize m_nsInterruptDesc;
@property(retain, nonatomic) NSString *nsTransferRemark; // @synthesize nsTransferRemark;
@property(nonatomic) _Bool bNeedInputNewTelToResetBalanceTel; // @synthesize bNeedInputNewTelToResetBalanceTel;
@property(retain, nonatomic) WCPayCardBinInfo *m_structSelectedResetBalanceTelCardType; // @synthesize m_structSelectedResetBalanceTelCardType;
@property(retain, nonatomic) WCPayBindCardInfo *m_structSelectedResetBalanceTelCardInfo; // @synthesize m_structSelectedResetBalanceTelCardInfo;
@property(retain, nonatomic) NSError *m_oPaidError; // @synthesize m_oPaidError;
@property(retain, nonatomic) NSString *nsWapPayUrl; // @synthesize nsWapPayUrl;
@property(nonatomic) unsigned int m_c2c_sceneId; // @synthesize m_c2c_sceneId;
@property(retain, nonatomic) NSString *m_c2c_templateId; // @synthesize m_c2c_templateId;
@property(retain, nonatomic) NSString *m_c2c_url; // @synthesize m_c2c_url;
@property(retain, nonatomic) NSString *m_c2c_receiver_des; // @synthesize m_c2c_receiver_des;
@property(retain, nonatomic) NSString *m_c2c_sender_des; // @synthesize m_c2c_sender_des;
@property(retain, nonatomic) NSString *m_c2c_des; // @synthesize m_c2c_des;
@property(retain, nonatomic) NSString *m_c2c_receiver_title; // @synthesize m_c2c_receiver_title;
@property(retain, nonatomic) NSString *m_c2c_sender_title; // @synthesize m_c2c_sender_title;
@property(retain, nonatomic) NSString *m_nsTransferMoneySuccessMsgContent; // @synthesize m_nsTransferMoneySuccessMsgContent;
@property(retain, nonatomic) NSString *m_nsFacingPaidID; // @synthesize m_nsFacingPaidID;
@property(nonatomic) int m_enWCPayFacingReceiveMoneyScene; // @synthesize m_enWCPayFacingReceiveMoneyScene;
@property(retain, nonatomic) NSString *m_nsFixedAmountReceiveMoneyDesc; // @synthesize m_nsFixedAmountReceiveMoneyDesc;
@property(nonatomic) long long m_llFixedAmountReceiveMoneyTotalMoney; // @synthesize m_llFixedAmountReceiveMoneyTotalMoney;
@property(retain, nonatomic) NSString *m_nsFixedAmountReceiveMoneyQRCode; // @synthesize m_nsFixedAmountReceiveMoneyQRCode;
@property(nonatomic) unsigned int m_uiStepInFacingReceiveViewTimestamp; // @synthesize m_uiStepInFacingReceiveViewTimestamp;
@property(retain, nonatomic) NSMutableArray *m_arrFacingReceiveMoneyPayer; // @synthesize m_arrFacingReceiveMoneyPayer;
@property(retain, nonatomic) WCPayTransferPrepayRequestStruct *m_oWCPayTransferPrepayRequestStruct; // @synthesize m_oWCPayTransferPrepayRequestStruct;
@property(nonatomic) unsigned int m_uiEffectiveDate; // @synthesize m_uiEffectiveDate;
@property(nonatomic) unsigned long long m_uiTransferInvalidTime; // @synthesize m_uiTransferInvalidTime;
@property(retain, nonatomic) NSString *nsTransferExtMoney; // @synthesize nsTransferExtMoney;
@property(retain, nonatomic) NSString *m_nsTransferID; // @synthesize m_nsTransferID;
@property(retain, nonatomic) NSString *m_nsTranferMoneyString; // @synthesize m_nsTranferMoneyString;
@property(retain, nonatomic) NSString *m_nsCurrentUserName; // @synthesize m_nsCurrentUserName;
@property(retain, nonatomic) NSString *m_nsControlTransationID; // @synthesize m_nsControlTransationID;
@property(retain, nonatomic) NSString *m_nsSelectedTruthNameFromQRCode; // @synthesize m_nsSelectedTruthNameFromQRCode;
@property(retain, nonatomic) NSString *m_nsSelectedUserNameFromQRCode; // @synthesize m_nsSelectedUserNameFromQRCode;
@property(nonatomic) long long m_placeHolderMoney; // @synthesize m_placeHolderMoney;
@property(retain, nonatomic) CContact *m_oSelectedContact; // @synthesize m_oSelectedContact;
@property(retain, nonatomic) NSString *nsTransferMoney; // @synthesize nsTransferMoney;
@property(nonatomic) unsigned int m_uiQueryQuestionCnt; // @synthesize m_uiQueryQuestionCnt;
@property(retain, nonatomic) WCPayCreditCardInfo *m_sturctWCPayCreditCardInfo; // @synthesize m_sturctWCPayCreditCardInfo;
@property(retain, nonatomic) NSString *m_nsNameMask; // @synthesize m_nsNameMask;
@property(retain, nonatomic) NSString *m_nsIDNumberMask; // @synthesize m_nsIDNumberMask;
@property(retain, nonatomic) NSArray *m_arrIncreaseLimitQuestionArray; // @synthesize m_arrIncreaseLimitQuestionArray;
@property(nonatomic) _Bool m_bNeedBind; // @synthesize m_bNeedBind;
@property(retain, nonatomic) NSString *m_nsSessionKey; // @synthesize m_nsSessionKey;
@property(retain, nonatomic) NSArray *m_arrVirtualNoBindCard; // @synthesize m_arrVirtualNoBindCard;
@property(nonatomic) _Bool m_bBankUser; // @synthesize m_bBankUser;
@property(nonatomic) int m_enWCPayOfflinePayCodeDisplayScene; // @synthesize m_enWCPayOfflinePayCodeDisplayScene;
@property(retain, nonatomic) WCPayOfflinePayQueryInfoRequest *m_sturctWCPayOfflinePayQueryInfoRequest; // @synthesize m_sturctWCPayOfflinePayQueryInfoRequest;
@property(nonatomic) unsigned int uiInitalMoney; // @synthesize uiInitalMoney;
@property(retain, nonatomic) WCPayOfflinePayQueryInfo *m_structWCPayOfflinePayQueryInfo; // @synthesize m_structWCPayOfflinePayQueryInfo;
@property(retain, nonatomic) NSString *nsOfflinePayConfirmViewTips; // @synthesize nsOfflinePayConfirmViewTips;
@property(nonatomic) long long uiOfflinePayChangedLimit; // @synthesize uiOfflinePayChangedLimit;
@property(nonatomic) long long offlinePayNumber; // @synthesize offlinePayNumber;
@property(nonatomic) long long offlinePayAmount; // @synthesize offlinePayAmount;
@property(nonatomic) long long uiOfflinePayLimit; // @synthesize uiOfflinePayLimit;
@property(retain, nonatomic) WCPayOfflinePayChangeLimitFeeRequestStruct *m_structWCPayOfflinePayChangeLimitFeeRequestStruct; // @synthesize m_structWCPayOfflinePayChangeLimitFeeRequestStruct;
@property(nonatomic) _Bool m_bNeedOfflinePayLoading; // @synthesize m_bNeedOfflinePayLoading;
@property(retain, nonatomic) NSString *nsOfflinepayBarCode; // @synthesize nsOfflinepayBarCode;
@property(retain, nonatomic) NSString *nsOfflinePayQRCode; // @synthesize nsOfflinePayQRCode;
@property(nonatomic) _Bool bNeedGetSMSAgain; // @synthesize bNeedGetSMSAgain;
@property(retain, nonatomic) NSDate *startVerifySMSDate; // @synthesize startVerifySMSDate;
@property(retain, nonatomic) NSDate *startPayDate; // @synthesize startPayDate;
@property(retain, nonatomic) WCPayAuthenticationPayStatusStruct *m_structAuthenticationPayStatus; // @synthesize m_structAuthenticationPayStatus;
@property(retain, nonatomic) NSMutableArray *m_arrStatusChangeOrderArray; // @synthesize m_arrStatusChangeOrderArray;
@property(retain, nonatomic) NSMutableArray *m_arrNotifyMsgArray; // @synthesize m_arrNotifyMsgArray;
@property(retain, nonatomic) NSMutableArray *m_arrOrderArray; // @synthesize m_arrOrderArray;
@property(retain, nonatomic) WCPayResetPasswordInfo *m_structResetPayPasswordInfo; // @synthesize m_structResetPayPasswordInfo;
@property(retain, nonatomic) WCPayVirtualNoBindCard *m_structVirtualCardInfo; // @synthesize m_structVirtualCardInfo;
@property(retain, nonatomic) WCPayBindInfo *m_structBindInfo; // @synthesize m_structBindInfo;
@property(retain, nonatomic) WCPayAuthenticationPayVerifySMSStruct *m_structAuthenticationPayVerifySMS; // @synthesize m_structAuthenticationPayVerifySMS;
@property(retain, nonatomic) WCPayAuthenticationPay *m_structAuthenticationPay; // @synthesize m_structAuthenticationPay;
@property(retain, nonatomic) NSArray *m_arrAvailableBank; // @synthesize m_arrAvailableBank;
@property(retain, nonatomic) WCPayMultiOrderDetail *m_structOrderDetail; // @synthesize m_structOrderDetail;
@property(retain, nonatomic) WCPayIAPOrderDetail *m_structIAPOrderDetail; // @synthesize m_structIAPOrderDetail;
@property(retain, nonatomic) WCPayNoticeInfo *m_structNoticeInfo; // @synthesize m_structNoticeInfo;
@property(retain, nonatomic) WCPaySwitchInfo *m_structSwitchInfo; // @synthesize m_structSwitchInfo;
@property(retain, nonatomic) WCPayBalanceInfo *m_structBalanceInfo; // @synthesize m_structBalanceInfo;
@property(retain, nonatomic) WCPayUserInfo *m_structUserInfo; // @synthesize m_structUserInfo;
@property(retain, nonatomic) WCPayCardBinInfo *m_structSelectedCardType; // @synthesize m_structSelectedCardType;
@property(retain, nonatomic) WCPayBindCardInfo *m_structSelectedCardInfo; // @synthesize m_structSelectedCardInfo;
@property(retain, nonatomic) TenpayBindCardSubscribeAppInfo *m_structSelectedTenpayBindCardSubscribeAppInfo; // @synthesize m_structSelectedTenpayBindCardSubscribeAppInfo;
@property(retain, nonatomic) NSArray *m_arrTenpayImportBindCard; // @synthesize m_arrTenpayImportBindCard;
@property(retain, nonatomic) TenpayBindCardInfo *m_structSelectedTenpayBindCardInfo; // @synthesize m_structSelectedTenpayBindCardInfo;
@property(retain, nonatomic) NSArray *m_arrHistoryCard; // @synthesize m_arrHistoryCard;
@property(retain, nonatomic) NSArray *m_arrBindedCard; // @synthesize m_arrBindedCard;
@property(retain, nonatomic) NSArray *m_arrWXBorrowMoneyItemList; // @synthesize m_arrWXBorrowMoneyItemList;
@property(retain, nonatomic) NSString *m_nsToken; // @synthesize m_nsToken;
@property(retain, nonatomic) WCPayBindUserInfo *bindUserInfo; // @synthesize bindUserInfo;
@property(retain, nonatomic) NSString *nsCreditPayLast4IDNumber; // @synthesize nsCreditPayLast4IDNumber;
@property(retain, nonatomic) NSString *nsCreditPayFirstName; // @synthesize nsCreditPayFirstName;
@property(retain, nonatomic) NSString *nsCreditPayName; // @synthesize nsCreditPayName;
@property(retain, nonatomic) NSString *nsCreditPayIDNumber; // @synthesize nsCreditPayIDNumber;
@property(retain, nonatomic) NSString *nsEmail; // @synthesize nsEmail;
@property(retain, nonatomic) NSString *nsZipCode; // @synthesize nsZipCode;
@property(retain, nonatomic) NSString *nsPhoneNumber_Overseas; // @synthesize nsPhoneNumber_Overseas;
@property(retain, nonatomic) NSString *nsAddress; // @synthesize nsAddress;
@property(retain, nonatomic) NSString *nsCity; // @synthesize nsCity;
@property(retain, nonatomic) NSString *nsArea; // @synthesize nsArea;
@property(retain, nonatomic) NSString *nsCountry; // @synthesize nsCountry;
@property(retain, nonatomic) NSString *nsLastName; // @synthesize nsLastName;
@property(retain, nonatomic) NSString *nsFirstName; // @synthesize nsFirstName;
@property(retain, nonatomic) NSString *nsWCLanguage; // @synthesize nsWCLanguage;
@property(nonatomic) unsigned int uiCardBankTag; // @synthesize uiCardBankTag;
@property(retain, nonatomic) NSString *nsShareToFriendURL; // @synthesize nsShareToFriendURL;
@property(retain, nonatomic) NSString *nsPaidSuccessDetail; // @synthesize nsPaidSuccessDetail;
@property(retain, nonatomic) NSString *nsServiceSubscribeUrl; // @synthesize nsServiceSubscribeUrl;
@property(retain, nonatomic) NSString *nsServiceDetail; // @synthesize nsServiceDetail;
@property(retain, nonatomic) NSString *nsServiceAppUserName; // @synthesize nsServiceAppUserName;
@property(retain, nonatomic) NSString *nsServiceAppLogoUrl; // @synthesize nsServiceAppLogoUrl;
@property(nonatomic) int uiServiceSubscribeStrategy; // @synthesize uiServiceSubscribeStrategy;
@property(retain, nonatomic) NSString *nsServiceAppName; // @synthesize nsServiceAppName;
@property(retain, nonatomic) NSString *nsServiceAppID; // @synthesize nsServiceAppID;
@property(retain, nonatomic) WCPayAppAuthRequestStruct *structAppAuthRequest; // @synthesize structAppAuthRequest;
@property(retain, nonatomic) NSString *nsAppSource; // @synthesize nsAppSource;
@property(retain, nonatomic) NSString *nsAppID; // @synthesize nsAppID;
@property(retain, nonatomic) NSString *nsAppName; // @synthesize nsAppName;
@property(nonatomic) unsigned int uiJSApiPayScene; // @synthesize uiJSApiPayScene;
@property(nonatomic) unsigned int uiBindScene; // @synthesize uiBindScene;
@property(nonatomic) unsigned int uiPayScene; // @synthesize uiPayScene;
@property(retain, nonatomic) NSString *nsVerifiedPasswd; // @synthesize nsVerifiedPasswd;
@property(nonatomic) unsigned int uiFlag; // @synthesize uiFlag;
@property(retain, nonatomic) NSString *nsRepeatPayPasswd; // @synthesize nsRepeatPayPasswd;
@property(retain, nonatomic) NSString *nsPayPasswd; // @synthesize nsPayPasswd;
@property(retain, nonatomic) NSString *nsImportCode; // @synthesize nsImportCode;
@property(retain, nonatomic) NSString *nsProductsID; // @synthesize nsProductsID;
@property(retain, nonatomic) NSString *nsUUID; // @synthesize nsUUID;
@property(retain, nonatomic) NSString *nsOrderID; // @synthesize nsOrderID;
@property(nonatomic) _Bool m_bAutoFilledCardInfo; // @synthesize m_bAutoFilledCardInfo;
@property(retain, nonatomic) NSString *nsFetchArriveTime; // @synthesize nsFetchArriveTime;
@property(retain, nonatomic) NSString *nsFetchBalanceMoney; // @synthesize nsFetchBalanceMoney;
@property(retain, nonatomic) NSString *nsSaveBalanceMoney; // @synthesize nsSaveBalanceMoney;
@property(retain, nonatomic) NSString *nsPhoneVerifyCode; // @synthesize nsPhoneVerifyCode;
@property(retain, nonatomic) NSString *nsValidDate; // @synthesize nsValidDate;
@property(retain, nonatomic) NSString *nsResetValidDate; // @synthesize nsResetValidDate;
@property(retain, nonatomic) NSString *nsResetCVVCode; // @synthesize nsResetCVVCode;
@property(retain, nonatomic) NSString *nsCVVCode; // @synthesize nsCVVCode;
@property(retain, nonatomic) NSString *nsResetPhoneNumber; // @synthesize nsResetPhoneNumber;
@property(retain, nonatomic) NSString *nsPhoneNumber; // @synthesize nsPhoneNumber;
@property(retain, nonatomic) NSString *nsCardNumber; // @synthesize nsCardNumber;
@property(retain, nonatomic) NSString *nsCardHodlerIdentifyCard; // @synthesize nsCardHodlerIdentifyCard;
@property(retain, nonatomic) NSString *nsCardHodlerCredit; // @synthesize nsCardHodlerCredit;
@property(retain, nonatomic) NSString *nsCardHodlerName; // @synthesize nsCardHodlerName;
- (void).cxx_destruct;
- (_Bool)isTrueNameValid;
- (id)defualtCardInfo;
- (_Bool)isBindedBankCard;
- (_Bool)isPayWithBalance;
- (void)dealloc;
- (id)init;

@end

