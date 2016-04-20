/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:07 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface MicroPaymentProduct : NSObject {

	long long _contentSize;
	NSString* _contentVersion;
	BOOL _hosted;
	NSString* _localeIdentifier;
	NSString* _localizedDescription;
	NSString* _localizedTitle;
	NSNumber* _price;
	NSString* _productIdentifier;

}

@property (assign,nonatomic) long long contentSize;                      //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,copy) NSString * contentVersion;                    //@synthesize contentVersion=_contentVersion - In the implementation block
@property (assign,getter=isHosted,nonatomic) BOOL hosted;                //@synthesize hosted=_hosted - In the implementation block
@property (nonatomic,copy) NSString * localeIdentifier;                  //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSNumber * price;                             //@synthesize price=_price - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                 //@synthesize productIdentifier=_productIdentifier - In the implementation block
-(id)copyProduct;
-(void)setHosted:(BOOL)arg1 ;
-(NSString *)productIdentifier;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(long long)contentSize;
-(NSString *)localizedDescription;
-(void)setContentSize:(long long)arg1 ;
-(NSString *)localeIdentifier;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(BOOL)isHosted;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setContentVersion:(NSString *)arg1 ;
-(NSNumber *)price;
-(void)setPrice:(NSNumber *)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(NSString *)contentVersion;
@end

