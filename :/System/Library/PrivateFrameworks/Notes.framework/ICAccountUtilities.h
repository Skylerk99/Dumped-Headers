/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:29 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, ACAccountStore, NSDictionary;

@interface ICAccountUtilities : NSObject {

	ACAccount* _primaryICloudACAccount;
	ACAccountStore* _accountStore;
	NSDictionary* _currentICloudAccountState;

}

@property (nonatomic,retain) ACAccountStore * accountStore;                              //@synthesize accountStore=_accountStore - In the implementation block
@property (readonly) ACAccount * primaryICloudACAccount;                                 //@synthesize primaryICloudACAccount=_primaryICloudACAccount - In the implementation block
@property (nonatomic,readonly) BOOL primaryICloudAccountEnabled; 
@property (nonatomic,readonly) BOOL didChooseToMigratePrimaryICloudAccount; 
@property (nonatomic,copy) NSDictionary * currentICloudAccountState;                     //@synthesize currentICloudAccountState=_currentICloudAccountState - In the implementation block
+(id)sharedInstance;
+(void)startSharedInstance;
+(void)clearSharedInstance;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(void)dealloc;
-(id)init;
-(BOOL)didChooseToMigratePrimaryICloudAccount;
-(id)initForObservingAccountStoreChanges:(BOOL)arg1 ;
-(void)setCurrentICloudAccountState:(NSDictionary *)arg1 ;
-(void)updateICloudACAccountFromStore;
-(void)internalInvalidatePrimaryICloudACAccount;
-(NSDictionary *)currentICloudAccountState;
-(BOOL)primaryICloudAccountEnabled;
-(void)invalidatePrimaryICloudACAccount;
-(ACAccount *)primaryICloudACAccount;
-(void)accountStoreDidChange:(id)arg1 ;
@end

