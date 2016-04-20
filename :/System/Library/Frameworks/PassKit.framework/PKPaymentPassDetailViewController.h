/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:14 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>
#import <libobjc.A.dylib/PKPaymentVerificationPresentationDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <TechSupport/MFMailComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@protocol PKPassLibraryDataProvider, PKPaymentDataProvider, OS_dispatch_source, PKPassDeleteHandler;
@class NSObject, PKPaymentPass, PKPaymentApplication, PKPaymentWebService, PKPaymentVerificationPresentationController, PKVerificationRequestRecord, PKPaymentPassDetailActivationFooterView, NSNumberFormatter, PKSettingTableCell, NSArray, UIColor, NSString;

@interface PKPaymentPassDetailViewController : UITableViewController <PKPaymentDataProviderDelegate, PKPaymentVerificationPresentationDelegate, UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate, PSStateRestoration> {

	id<PKPassLibraryDataProvider> _passLibraryDataProvider;
	id<PKPaymentDataProvider> _paymentServiceDataProvider;
	long long _detailViewStyle;
	NSObject*<OS_dispatch_source> _transactionTimer;
	BOOL _deepLinkingEnabled;
	BOOL _passDeletionInProgress;
	PKPaymentPass* _pass;
	PKPaymentApplication* _defaultPaymentApplication;
	PKPaymentWebService* _webService;
	PKPaymentVerificationPresentationController* _verificationPresenter;
	PKVerificationRequestRecord* _verificationRecord;
	PKPaymentPassDetailActivationFooterView* _activationFooter;
	NSNumberFormatter* _numberFormatter;
	PKSettingTableCell* _notificationSwitch;
	PKSettingTableCell* _automaticPresentationSwitch;
	NSArray* _sections;
	id<PKPassDeleteHandler> _deleteOverrider;
	UIColor* _primaryTextColor;
	UIColor* _detailTextColor;
	UIColor* _linkTextColor;
	UIColor* _warningTextColor;
	UIColor* _highlightColor;
	NSArray* _transactions;
	NSArray* _paymentApplications;

}

@property (assign,nonatomic) id<PKPassDeleteHandler> deleteOverrider;              //@synthesize deleteOverrider=_deleteOverrider - In the implementation block
@property (assign,nonatomic) UIColor * primaryTextColor;                           //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (assign,nonatomic) UIColor * detailTextColor;                            //@synthesize detailTextColor=_detailTextColor - In the implementation block
@property (assign,nonatomic) UIColor * linkTextColor;                              //@synthesize linkTextColor=_linkTextColor - In the implementation block
@property (assign,nonatomic) UIColor * warningTextColor;                           //@synthesize warningTextColor=_warningTextColor - In the implementation block
@property (assign,nonatomic) UIColor * highlightColor;                             //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,copy) NSArray * transactions;                                 //@synthesize transactions=_transactions - In the implementation block
@property (nonatomic,retain) NSArray * paymentApplications;                        //@synthesize paymentApplications=_paymentApplications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPass:(id)arg1 webService:(id)arg2 style:(long long)arg3 passLibraryDataProvider:(id)arg4 paymentServiceDataProvider:(id)arg5 ;
-(void)_reloadPassAndView;
-(void)_passSettingsChanged:(id)arg1 ;
-(void)_setupSections;
-(void)_done:(id)arg1 ;
-(void)_reloadTransactionSection;
-(BOOL)_doesTableContainSection:(long long)arg1 ;
-(void)_reloadTransactionsWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)_indexOfSection:(long long)arg1 ;
-(BOOL)_shouldShowAutomaticPresentation;
-(NSArray *)paymentApplications;
-(BOOL)_shouldShowContactCell;
-(BOOL)_shouldShowTermsCell;
-(BOOL)_shouldShowPrivacyPolicyCell;
-(id)_cardInfoCells;
-(id)_privacyTermsCells;
-(long long)_numberOfRowsForPassStateSection;
-(void)_presentMerchantDetailsViewWithTransaction:(id)arg1 forCell:(id)arg2 ;
-(void)_didSelectPassStateSection;
-(void)_didSelectTransactionAtRow:(long long)arg1 ;
-(void)_didSelectContactBankSection;
-(void)_didSelectBillingAddress;
-(void)_didSelectPrivacySectionAtRow:(long long)arg1 ;
-(void)_didSelectDeleteCard;
-(void)_didSelectPaymentApplicationSectionRowAtIndexPath:(id)arg1 ;
-(id)_headerTitleForPassStateSection;
-(id)_footerTextForPassStateSection;
-(id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1 ;
-(double)_footerViewHeightForPassStateSectionWithTableView:(id)arg1 ;
-(id)_footerViewForPassStateSection;
-(id)_linkedAppCell;
-(id)_cellForPassStateSection;
-(id)_paymentApplicationsCellForIndexPath:(id)arg1 ;
-(id)_automaticPresentationCell;
-(id)_notificationServicesCell;
-(id)_transactionCellForIndexPath:(id)arg1 ;
-(id)_moreTransactionsCell;
-(id)_infoCell:(id)arg1 ;
-(id)_linkCellWithText:(id)arg1 ;
-(id)_deviceAccountNumberCell;
-(id)_billingAddressCell;
-(id)_deleteCardCell;
-(void)setTransactions:(NSArray *)arg1 ;
-(void)_updateTransactionsArrayWithTransaction:(id)arg1 ;
-(id)_defaultCell;
-(void)_setPlaceholderColorForCell:(id)arg1 ;
-(id)_subtitleCell;
-(id)_infoCell:(id)arg1 withDetailText:(id)arg2 ;
-(void)_automaticPresentationSwitchChanged:(id)arg1 ;
-(void)_notificationSwitchChanged:(id)arg1 ;
-(void)_activationFooterPressed:(id)arg1 ;
-(void)_callIssuer;
-(void)_emailIssuer;
-(void)_openIssuerWebsite;
-(id)_activationFooterView;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2 ;
-(void)didChangeVerificationPresentation;
-(void)presentVerificationViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)canBeShownFromSuspendedState;
-(id)initWithPass:(id)arg1 webService:(id)arg2 style:(long long)arg3 dataProvider:(id)arg4 ;
-(void)setDeleteOverrider:(id<PKPassDeleteHandler>)arg1 ;
-(double)_heightForPassStateSectionWithTableView:(id)arg1 ;
-(id<PKPassDeleteHandler>)deleteOverrider;
-(UIColor *)detailTextColor;
-(void)setDetailTextColor:(UIColor *)arg1 ;
-(UIColor *)linkTextColor;
-(void)setLinkTextColor:(UIColor *)arg1 ;
-(UIColor *)warningTextColor;
-(void)setWarningTextColor:(UIColor *)arg1 ;
-(NSArray *)transactions;
-(void)setPaymentApplications:(NSArray *)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(UIColor *)primaryTextColor;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(void)_reloadView;
@end

