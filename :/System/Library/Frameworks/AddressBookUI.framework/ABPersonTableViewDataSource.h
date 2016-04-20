/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:53 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSourcePrivate.h>
#import <libobjc.A.dylib/ABPrimaryValueDelegate.h>
#import <libobjc.A.dylib/ABPersonCellLayoutManagerDelegate.h>

@protocol ABPersonTableViewDataSourceDelegate, ABStyleProvider;
@class ABActionsController, ABPersonTableViewMultiCellDelegate, ABPersonTableViewImageDataDelegate, ABPersonTableViewActionsDelegate, ABPersonTableViewLinkingDelegate, ABPersonPickersDelegate, ABPersonTableViewSharingDelegate, NSMutableDictionary, NSMutableArray, ABUIPerson, ABNamePropertyGroup, UILabel, ABPersonTableHeaderView, ABPersonTableFooterView, UIView, ABLabelViewWithVariablePositioning, UITableViewCell, ABPersonCellLayoutManager, NSDictionary, NSArray, ABPersonTableView, NSIndexPath, ABMultiCellContentView, UIResponder, NSString, UIFont, ABPersonImageView;

@interface ABPersonTableViewDataSource : NSObject <UITableViewDelegate, UITableViewDataSourcePrivate, ABPrimaryValueDelegate, ABPersonCellLayoutManagerDelegate> {

	ABActionsController* _actionsController;
	CFArrayRef _optionalProperties;
	CFArrayRef _additionalProperties;
	CFDictionaryRef _multiCellContentViewsByCustomCell;
	ABPersonTableViewMultiCellDelegate* _multiCellContentViewDelegate;
	ABPersonTableViewImageDataDelegate* _imageDataDelegate;
	ABPersonTableViewActionsDelegate* _actionsDelegate;
	ABPersonTableViewLinkingDelegate* _linkingDelegate;
	ABPersonPickersDelegate* _pickersDelegate;
	ABPersonTableViewSharingDelegate* _sharingDelegate;
	BOOL _attemptDelayedBecomeFirstResponder;
	BOOL _isPinningLocked;
	NSMutableDictionary* _propertyGroupsStore;
	NSMutableDictionary* _unusedPropertyGroupsStore;
	NSMutableArray* _editablePropertyGroups;
	NSMutableArray* _propertyGroups;
	ABUIPerson* _preinsertedPerson;
	CFSetRef _addNewValuePropertiesStore;
	CFSetRef _addNewValueProperties;
	ABNamePropertyGroup* _namePropertyGroup;
	UILabel* _noValueLabel;
	ABPersonTableHeaderView* _headerView;
	ABPersonTableFooterView* _footerView;
	UIView* _customPersonTableHeaderView;
	UIView* _customPersonTableFooterView;
	UIView* _notesHeaderView;
	ABLabelViewWithVariablePositioning* _linkingHeaderView;
	int _primaryProperty;
	UITableViewCell* _partiallySelectedCell;
	ABPersonCellLayoutManager* _cellLayoutManager;
	UIView* _tableHeaderViewContainer;
	NSDictionary* _cachedKeyboardInfo;
	BOOL _isEditing;
	BOOL _isUnlinkingPerson;
	BOOL _badgeEmailPropertiesForMailVIP;
	double _lastReturnedHeaderHeight;
	BOOL _allowsActions;
	BOOL _allowsEditing;
	BOOL _allowsAddToFavorites;
	BOOL _allowsSendingTextMessage;
	BOOL _allowsSharing;
	BOOL _allowsConferencing;
	BOOL _allowsDeletion;
	BOOL _allowsSounds;
	BOOL _allowsVibrations;
	BOOL _shouldShowContactSourcesStringAsMessage;
	BOOL _highlightedValueIsImportant;
	BOOL _isSettingFirstResponder;
	BOOL _isEndingEditingTransactions;
	BOOL _viewControllerWillSlideOut;
	BOOL _selectedPropertyForCellWithoutLabelDivider;
	BOOL _ignoreVibrationsDidChangeNotification;
	int _highlightedValueProperty;
	int _highlightedValueIdentifier;
	int _insertionProperty;
	int _customKeyboardOutDirection;
	NSArray* _people;
	void* _addressBook;
	id<ABPersonTableViewDataSourceDelegate> _delegate;
	ABPersonTableView* _tableView;
	CFArrayRef _displayedProperties;
	id _insertionValue;
	id _insertionLabel;
	id<ABStyleProvider> _styleProvider;
	NSIndexPath* _lastActiveMultiCellIndexPath;
	ABMultiCellContentView* _lastActiveMultiCellContentView;
	ABMultiCellContentView* _multiCellContentViewForWillEndEditing;
	ABMultiCellContentView* _pinningMultiCellContentViewAlternate;
	NSIndexPath* _pinningMultiCellIndexPath;
	NSIndexPath* _pinningMultiCellRelativeIndexPath;
	UIResponder* _pinningResponder;
	NSMutableArray* _additionalLabels;

}

@property (assign,nonatomic) id<ABPersonTableViewDataSourceDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ABPersonTableView * tableView;                                                    //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) void* addressBook;                                                                //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,retain) NSArray * people;                                                                 //@synthesize people=_people - In the implementation block
@property (nonatomic,retain) id<ABStyleProvider> styleProvider;                                                //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,readonly) BOOL canSave; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,readonly) BOOL hasImageChanges; 
@property (nonatomic,readonly) BOOL hasNameChanges; 
@property (assign,nonatomic) BOOL allowsDeletion;                                                              //@synthesize allowsDeletion=_allowsDeletion - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                                               //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsAddToFavorites;                                                        //@synthesize allowsAddToFavorites=_allowsAddToFavorites - In the implementation block
@property (assign,nonatomic) BOOL allowsSendingTextMessage;                                                    //@synthesize allowsSendingTextMessage=_allowsSendingTextMessage - In the implementation block
@property (assign,nonatomic) BOOL allowsSharing;                                                               //@synthesize allowsSharing=_allowsSharing - In the implementation block
@property (assign,nonatomic) BOOL allowsConferencing;                                                          //@synthesize allowsConferencing=_allowsConferencing - In the implementation block
@property (assign,nonatomic) BOOL allowsActions;                                                               //@synthesize allowsActions=_allowsActions - In the implementation block
@property (assign,nonatomic) BOOL allowsSounds;                                                                //@synthesize allowsSounds=_allowsSounds - In the implementation block
@property (assign,nonatomic) BOOL allowsVibrations;                                                            //@synthesize allowsVibrations=_allowsVibrations - In the implementation block
@property (assign,nonatomic) BOOL shouldShowContactSourcesStringAsMessage;                                     //@synthesize shouldShowContactSourcesStringAsMessage=_shouldShowContactSourcesStringAsMessage - In the implementation block
@property (assign,nonatomic) CFArrayRef displayedProperties;                                                   //@synthesize displayedProperties=_displayedProperties - In the implementation block
@property (nonatomic,copy) NSString * alternateName; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,retain) UIFont * messageFont; 
@property (nonatomic,copy) NSString * messageDetail; 
@property (nonatomic,retain) UIFont * messageDetailFont; 
@property (nonatomic,retain) UIView * customMessageView; 
@property (assign,nonatomic) int highlightedValueProperty;                                                     //@synthesize highlightedValueProperty=_highlightedValueProperty - In the implementation block
@property (assign,nonatomic) int highlightedValueIdentifier;                                                   //@synthesize highlightedValueIdentifier=_highlightedValueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL highlightedValueIsImportant;                                                 //@synthesize highlightedValueIsImportant=_highlightedValueIsImportant - In the implementation block
@property (nonatomic,readonly) int insertionProperty;                                                          //@synthesize insertionProperty=_insertionProperty - In the implementation block
@property (nonatomic,readonly) id insertionValue;                                                              //@synthesize insertionValue=_insertionValue - In the implementation block
@property (nonatomic,readonly) id insertionLabel;                                                              //@synthesize insertionLabel=_insertionLabel - In the implementation block
@property (nonatomic,readonly) ABPersonImageView * personImageView; 
@property (nonatomic,retain) ABPersonTableHeaderView * tableHeaderView; 
@property (nonatomic,retain) UIView * personHeaderView; 
@property (assign,nonatomic) BOOL shouldAlignPersonHeaderViewToImage; 
@property (nonatomic,retain) UIView * customPersonTableHeaderView; 
@property (nonatomic,retain) UIView * customPersonTableFooterView; 
@property (nonatomic,readonly) ABPersonTableFooterView * tableFooterView; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (assign,nonatomic) int customKeyboardOutDirection;                                                   //@synthesize customKeyboardOutDirection=_customKeyboardOutDirection - In the implementation block
@property (assign,nonatomic) BOOL viewControllerWillSlideOut;                                                  //@synthesize viewControllerWillSlideOut=_viewControllerWillSlideOut - In the implementation block
@property (nonatomic,readonly) int primaryProperty; 
@property (nonatomic,readonly) NSString * attribution; 
@property (getter=isAttributionEnabled,nonatomic,readonly) BOOL attributionEnabled; 
@property (nonatomic,retain) NSIndexPath * lastActiveMultiCellIndexPath;                                       //@synthesize lastActiveMultiCellIndexPath=_lastActiveMultiCellIndexPath - In the implementation block
@property (nonatomic,retain) ABMultiCellContentView * lastActiveMultiCellContentView;                          //@synthesize lastActiveMultiCellContentView=_lastActiveMultiCellContentView - In the implementation block
@property (nonatomic,retain) ABMultiCellContentView * multiCellContentViewForWillEndEditing;                   //@synthesize multiCellContentViewForWillEndEditing=_multiCellContentViewForWillEndEditing - In the implementation block
@property (nonatomic,readonly) ABPersonTableViewMultiCellDelegate * multiCellContentViewDelegate; 
@property (nonatomic,readonly) ABPersonTableViewImageDataDelegate * imageDataDelegate; 
@property (nonatomic,readonly) ABPersonTableViewActionsDelegate * actionsDelegate; 
@property (nonatomic,readonly) ABPersonTableViewLinkingDelegate * linkingDelegate; 
@property (nonatomic,readonly) ABPersonPickersDelegate * pickersDelegate; 
@property (nonatomic,readonly) ABPersonTableViewSharingDelegate * sharingDelegate; 
@property (nonatomic,retain) NSMutableArray * additionalLabels;                                                //@synthesize additionalLabels=_additionalLabels - In the implementation block
@property (nonatomic,retain) ABMultiCellContentView * pinningMultiCellContentViewAlternate;                    //@synthesize pinningMultiCellContentViewAlternate=_pinningMultiCellContentViewAlternate - In the implementation block
@property (nonatomic,retain) NSIndexPath * pinningMultiCellIndexPath;                                          //@synthesize pinningMultiCellIndexPath=_pinningMultiCellIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * pinningMultiCellRelativeIndexPath;                                  //@synthesize pinningMultiCellRelativeIndexPath=_pinningMultiCellRelativeIndexPath - In the implementation block
@property (nonatomic,retain) UIResponder * pinningResponder;                                                   //@synthesize pinningResponder=_pinningResponder - In the implementation block
@property (nonatomic,readonly) BOOL isPinning; 
@property (assign,nonatomic) BOOL isSettingFirstResponder;                                                     //@synthesize isSettingFirstResponder=_isSettingFirstResponder - In the implementation block
@property (nonatomic,readonly) BOOL isEndingEditingTransactions;                                               //@synthesize isEndingEditingTransactions=_isEndingEditingTransactions - In the implementation block
@property (assign,nonatomic) BOOL selectedPropertyForCellWithoutLabelDivider;                                  //@synthesize selectedPropertyForCellWithoutLabelDivider=_selectedPropertyForCellWithoutLabelDivider - In the implementation block
@property (assign,nonatomic) BOOL ignoreVibrationsDidChangeNotification;                                       //@synthesize ignoreVibrationsDidChangeNotification=_ignoreVibrationsDidChangeNotification - In the implementation block
@property (assign,nonatomic) BOOL badgeEmailPropertiesForMailVIP;                                              //@synthesize badgeEmailPropertiesForMailVIP=_badgeEmailPropertiesForMailVIP - In the implementation block
@property (nonatomic,retain) UITableViewCell * partiallySelectedCell;                                          //@synthesize partiallySelectedCell=_partiallySelectedCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateRecord;
-(ABPersonTableViewActionsDelegate *)actionsDelegate;
-(void)selectLabelPartForCell:(id)arg1 ;
-(void)selectValuePartForCell:(id)arg1 ;
-(void)selectWholePartForCell:(id)arg1 ;
-(void)selectCustomPartWithFrame:(CGRect)arg1 occupiedCorners:(unsigned long long)arg2 forCell:(id)arg3 ;
-(ABPersonImageView *)personImageView;
-(ABPersonTableViewImageDataDelegate *)imageDataDelegate;
-(void)setAdditionalLabels:(NSMutableArray *)arg1 ;
-(UITableViewCell *)partiallySelectedCell;
-(id)insertionValue;
-(int)insertionProperty;
-(id)namePropertyGroup:(id)arg1 primaryValueForProperty:(int)arg2 ;
-(void)endEditingTransactions;
-(BOOL)allowsConferencing;
-(CFArrayRef)displayedProperties;
-(BOOL)allowsActions;
-(void)setAllowsConferencing:(BOOL)arg1 ;
-(ABPersonTableViewLinkingDelegate *)linkingDelegate;
-(void)setAllowsVibrations:(BOOL)arg1 ;
-(BOOL)allowsSounds;
-(BOOL)isInFullEditingMode;
-(BOOL)personCellLayoutManager:(id)arg1 isCellInFullEditMode:(id)arg2 ;
-(void)reloadImageData;
-(BOOL)hasImageChanges;
-(void)setMessageFont:(UIFont *)arg1 ;
-(void)setMessageDetailFont:(UIFont *)arg1 ;
-(void)setMessageDetail:(NSString *)arg1 ;
-(void)setCustomMessageView:(UIView *)arg1 ;
-(id)namePropertyGroup;
-(int)primaryProperty;
-(NSString *)messageDetail;
-(UIFont *)messageDetailFont;
-(UIView *)customMessageView;
-(void)setInsertionLabel:(id)arg1 ;
-(NSMutableArray *)additionalLabels;
-(void)unselectAllCellParts;
-(void)setSelectedPropertyForCellWithoutLabelDivider:(BOOL)arg1 ;
-(void)setIgnoreVibrationsDidChangeNotification:(BOOL)arg1 ;
-(id)_indexPathForPropertyGroup:(id)arg1 index:(long long)arg2 editableFlag:(BOOL)arg3 ;
-(id)propertyGroupForProperty:(int)arg1 context:(void*)arg2 ;
-(void)_performVibrationRelatedChangesReloadingFromModel:(BOOL)arg1 updatingDataUsingBlock:(/*^block*/id)arg2 ;
-(void)setInsertionValue:(id)arg1 ;
-(NSIndexPath *)pinningMultiCellIndexPath;
-(void)cancelPinning;
-(long long)tableViewRowAnimationForUpdateAction:(unsigned long long)arg1 isFirstRow:(BOOL)arg2 ;
-(void)setLastActiveMultiCellContentView:(ABMultiCellContentView *)arg1 ;
-(void)updateByAddingFieldForProperty:(int)arg1 whenEditing:(BOOL)arg2 ;
-(NSIndexPath *)lastActiveMultiCellIndexPath;
-(BOOL)isPinning;
-(ABPersonPickersDelegate *)pickersDelegate;
-(void)setAttribution:(id)arg1 enabled:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(BOOL)isAttributionEnabled;
-(NSString *)alternateName;
-(void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2 ;
-(void)propertyGroup:(id*)arg1 orActions:(id*)arg2 forSection:(long long)arg3 whenEditing:(BOOL)arg4 ;
-(void)_enumerateContextPointersForProperty:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)reloadDataIncludingHeaderView:(BOOL)arg1 invalidatePropertyData:(BOOL)arg2 ;
-(BOOL)isPropertyDisplayed:(int)arg1 ;
-(BOOL)allowsAddToFavorites;
-(BOOL)allowsVoiceFavorite;
-(BOOL)allowsFaceTimeFavorite;
-(BOOL)allowsSendingTextMessage;
-(BOOL)allowsSharing;
-(void)indexOfFirstPropertyGroupSection:(long long*)arg1 lastPropertyGroupSection:(long long*)arg2 addFieldSection:(long long*)arg3 linkingUISection:(long long*)arg4 primaryPropertyActionsSection:(long long*)arg5 topGroupingActionSection:(long long*)arg6 bottomGroupingActionSection:(long long*)arg7 cardActionsSection:(long long*)arg8 cardActionsSectionCount:(long long*)arg9 totalSectionCount:(long long*)arg10 whenEditing:(BOOL)arg11 ;
-(id)propertyGroupsForEditing:(BOOL)arg1 ;
-(long long)sectionIndexForPropertyGroup:(id)arg1 withPropertyGroups:(id)arg2 whenEditing:(BOOL)arg3 ;
-(id)actionsController;
-(int)highlightedValueProperty;
-(void)setHighlightedValueProperty:(int)arg1 ;
-(int)highlightedValueIdentifier;
-(void)setHighlightedValueIdentifier:(int)arg1 ;
-(id)tableHeaderViewContainer;
-(id)realHeaderView;
-(void)updateTableHeaderViewAnimated:(BOOL)arg1 ;
-(void)_registerForKeyboardNotifications;
-(void)_conferenceHistoryChanged:(id)arg1 ;
-(void)_registerForVibrationsChangedNotifications;
-(void)_unregisterForVibrationsChangedNotifications;
-(void)_getPropertyGroup:(id*)arg1 index:(long long*)arg2 editableFlag:(BOOL*)arg3 atIndexPath:(id)arg4 ;
-(BOOL)shouldShowContactSourcesStringAsMessage;
-(id)_contactSourcesString;
-(void)deleteButtonClicked:(id)arg1 ;
-(long long)indexOfLinkingUISectionWhenEditing:(BOOL)arg1 ;
-(void)notifyDataWasReloaded;
-(void)reloadConferencing;
-(void)setAllowsAddToFavorites:(BOOL)arg1 andReload:(BOOL)arg2 ;
-(void)setAllowsSendingTextMessage:(BOOL)arg1 andReload:(BOOL)arg2 ;
-(void)setAllowsSharing:(BOOL)arg1 andReload:(BOOL)arg2 ;
-(void)setAllowsConferencing:(BOOL)arg1 andReload:(BOOL)arg2 ;
-(void)updateContactSourcesStringIfNeeded;
-(void)invalidateAllPropertyGroups;
-(void)setDisplayedProperties:(CFArrayRef)arg1 andRefreshUI:(BOOL)arg2 ;
-(id)_footerView;
-(void)_updateDeleteButtonIfNeededForFooterView:(id)arg1 ;
-(void)setAllowsSendingTextMessage:(BOOL)arg1 ;
-(void)reloadDataIncludingHeaderView:(BOOL)arg1 ;
-(BOOL)hasNameChanges;
-(id)titleForNoValueWithProperty:(int)arg1 ;
-(void)setMultiCellContentViewForWillEndEditing:(ABMultiCellContentView *)arg1 ;
-(void)invalidateAdditionalProperties;
-(void)resetPropertyGroupStores;
-(void)reloadNoValueLabelAnimated:(BOOL)arg1 ;
-(void)scrollToLastActiveEntryFieldAnimated:(BOOL)arg1 ;
-(id)sectionAnimationsDictionaryForOriginalPropertyGroups:(id)arg1 newPropertyGroups:(id)arg2 whenEditing:(BOOL)arg3 ;
-(id)noValueLabel;
-(ABPersonTableViewMultiCellDelegate *)multiCellContentViewDelegate;
-(id)newHeaderView;
-(void)notifyHeaderViewHeightDidChange;
-(void)updateTableHeaderViewAnimated:(BOOL)arg1 andSkipTableViewHeaderHeightNotification:(BOOL)arg2 ;
-(void)updateTableFooterViewAnimated:(BOOL)arg1 ;
-(long long)_sectionIndexForPropertyGroup:(id)arg1 orProperty:(int)arg2 propertyGroupContext:(void*)arg3 withPropertyGroups:(id)arg4 whenEditing:(BOOL)arg5 ;
-(long long)sectionIndexForProperty:(int)arg1 propertyGroupContext:(void*)arg2 withPropertyGroups:(id)arg3 whenEditing:(BOOL)arg4 ;
-(void)updateSectionHeaderAndFooterHeightsForEditing:(BOOL)arg1 ;
-(void)_resetAddNewValueCells;
-(id)sectionAnimationsDictionaryForEditing:(BOOL)arg1 ;
-(void)_getFirstRows:(id*)arg1 andOtherRows:(id*)arg2 fromIndexPaths:(id)arg3 ;
-(void)updateHeadersAndFootersForEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)canSelectLabelForPropertyGroup:(id)arg1 info:(id)arg2 ;
-(void)_updateBackgroundForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setHighlightedValueIsImportant:(BOOL)arg1 ;
-(BOOL)usesAddNewValueCellForProperty:(int)arg1 ;
-(BOOL)shouldUseAddNewValueCellForProperty:(int)arg1 ;
-(void)setShouldUseAddNewValueCell:(BOOL)arg1 forProperty:(int)arg2 ;
-(void)_unregisterForKeyboardNotifications;
-(void)_endTableViewUpdatesWithoutScroll;
-(CFArrayRef)additionalProperties;
-(void)scrollToLastActiveEntryFieldAnimated:(BOOL)arg1 becomeFirstResponder:(BOOL)arg2 ;
-(long long)numberOfSectionsWhenEditing:(BOOL)arg1 ;
-(id)_indexPathForHeaderViewRow:(unsigned long long)arg1 ;
-(id)propertyGroupForProperty:(int)arg1 context:(void*)arg2 createIfEmpty:(BOOL)arg3 ;
-(void)setLastActiveMultiCellIndexPath:(NSIndexPath *)arg1 ;
-(void)tableViewAddFieldUpdateAnimationsDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)beginPinning;
-(CFArrayRef)newAdditionalProperties;
-(void*)_copyDefaultPolicy:(void*)arg1 ;
-(BOOL)isPropertyOptional:(int)arg1 ;
-(id)newPropertyGroupsForEditing:(BOOL)arg1 withDisplayedProperties:(CFArrayRef)arg2 ;
-(id)newPropertyGroupsForEditing:(BOOL)arg1 ;
-(void)invalidatePropertyGroupsForEditing:(BOOL)arg1 ;
-(void)setPinningMultiCellIndexPath:(NSIndexPath *)arg1 ;
-(void)setPinningResponder:(UIResponder *)arg1 ;
-(void)setPinningMultiCellRelativeIndexPath:(NSIndexPath *)arg1 ;
-(void)setPinningMultiCellContentViewAlternate:(ABMultiCellContentView *)arg1 ;
-(void)setPartiallySelectedCell:(UITableViewCell *)arg1 ;
-(BOOL)hasOnlyRingtoneChanges;
-(void)setInsertionProperty:(int)arg1 value:(id)arg2 label:(id)arg3 ;
-(id)addValueCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2 ;
-(void)_getDataProvider:(id*)arg1 andInfo:(id*)arg2 forIndexPath:(id)arg3 ;
-(id)cellLayoutManager;
-(id)newAccessoryViewWhenEditing:(BOOL)arg1 forDataProvider:(id)arg2 info:(id)arg3 ;
-(void)_setMultiCellContentView:(id)arg1 forCustomPropertyCell:(id)arg2 ;
-(id)_multiCellContentViewForCustomPropertyCell:(id)arg1 ;
-(id)actionCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2 isConference:(BOOL)arg3 hasCustomContent:(BOOL)arg4 ;
-(id)tableViewCellForActions:(id)arg1 tableView:(id)arg2 row:(long long)arg3 editing:(BOOL)arg4 allowDequeing:(BOOL)arg5 tag:(long long*)arg6 ;
-(long long)rowIndexInPropertyGroup:(id*)arg1 orActions:(id*)arg2 forRow:(long long)arg3 inSection:(long long)arg4 whenEditing:(BOOL)arg5 ;
-(id)ieTableViewCellForPropertyGroup:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 editing:(BOOL)arg4 allowDequeing:(BOOL)arg5 tag:(long long*)arg6 ;
-(void)presentRelatedNamesPicker:(id)arg1 ;
-(id)linkedCardCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2 ;
-(BOOL)viewControllerWillSlideOut;
-(void)adjustTableViewForKeyboardInfo:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateTableForVibrationChanges;
-(void)tableView:(id)arg1 cell:(id*)arg2 orTag:(long long*)arg3 forRowAtIndexPath:(id)arg4 allowDequeing:(BOOL)arg5 ;
-(long long)numberOfRowsInSection:(long long)arg1 whenEditing:(BOOL)arg2 ;
-(id)sectionAnimationsDictionaryForSwipeToDeleteAtIndexPath:(id)arg1 ;
-(void)_updateCellsForDataProvider:(id)arg1 afterDeleteAtIndex:(long long)arg2 isInsertionIndex:(BOOL)arg3 inTableView:(id)arg4 ;
-(void)endPinning;
-(BOOL)_isReadonlyAtIndexPath:(id)arg1 ;
-(void)valueAtIndex:(long long)arg1 selectedForPropertyGroup:(id)arg2 withMemberCell:(id)arg3 forEditing:(BOOL)arg4 ;
-(void)swapAddNewValueCellForProperty:(int)arg1 atIndexPath:(id)arg2 ;
-(void)addFieldCellSelected:(id)arg1 ;
-(void)showLinkedCardAtRow:(long long)arg1 ;
-(id)_notesHeaderView;
-(id)_linkingHeaderView;
-(void)setLinkingDelegate:(ABPersonTableViewLinkingDelegate *)arg1 ;
-(ABPersonTableViewSharingDelegate *)sharingDelegate;
-(id)controllerMainView;
-(BOOL)isUnlinkingPersonWithAnimation;
-(id)prepareForLinkingUIUpdate;
-(void)updateLinkingUI:(id)arg1 ;
-(void)updateForConferencingAvailabilityChange;
-(void)setAllowsAddToFavorites:(BOOL)arg1 ;
-(void)setShouldShowContactSourcesStringAsMessage:(BOOL)arg1 ;
-(void)reloadNameData;
-(void)reloadPreferredPersonForName;
-(void)reloadDeleteButton;
-(void)reloadPropertyGroups;
-(void)reloadFavoritesData;
-(UIView *)customPersonTableHeaderView;
-(void)setCustomPersonTableHeaderView:(UIView *)arg1 ;
-(BOOL)shouldAlignPersonHeaderViewToImage;
-(void)setShouldAlignPersonHeaderViewToImage:(BOOL)arg1 ;
-(UIView *)customPersonTableFooterView;
-(void)setCustomPersonTableFooterView:(UIView *)arg1 ;
-(void)headerFooterAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)prepareView;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(BOOL)arg4 ;
-(void)addFieldCellWillSelect:(id)arg1 ;
-(void)addToContactsButtonClicked:(id)arg1 ;
-(void)updateCellEditingStyleAtIndexPath:(id)arg1 ;
-(id)displayedPropertyGroupForProperty:(int)arg1 context:(void*)arg2 whenEditing:(BOOL)arg3 ;
-(void)_handleUserGeneratedVibrationsDidChangeNotification;
-(long long)editingSectionForNonEditingSection:(long long)arg1 ;
-(BOOL)allowsVibrations;
-(BOOL)highlightedValueIsImportant;
-(id)insertionLabel;
-(ABMultiCellContentView *)lastActiveMultiCellContentView;
-(ABMultiCellContentView *)multiCellContentViewForWillEndEditing;
-(ABMultiCellContentView *)pinningMultiCellContentViewAlternate;
-(NSIndexPath *)pinningMultiCellRelativeIndexPath;
-(UIResponder *)pinningResponder;
-(BOOL)isSettingFirstResponder;
-(void)setIsSettingFirstResponder:(BOOL)arg1 ;
-(BOOL)isEndingEditingTransactions;
-(void)setViewControllerWillSlideOut:(BOOL)arg1 ;
-(int)customKeyboardOutDirection;
-(void)setCustomKeyboardOutDirection:(int)arg1 ;
-(BOOL)selectedPropertyForCellWithoutLabelDivider;
-(BOOL)ignoreVibrationsDidChangeNotification;
-(BOOL)badgeEmailPropertiesForMailVIP;
-(void)setBadgeEmailPropertiesForMailVIP:(BOOL)arg1 ;
-(id<ABStyleProvider>)styleProvider;
-(void)setAlternateName:(NSString *)arg1 ;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(void)setAllowsDeletion:(BOOL)arg1 ;
-(BOOL)allowsDeletion;
-(UIView *)personHeaderView;
-(void)setPersonHeaderView:(UIView *)arg1 ;
-(UIFont *)messageFont;
-(BOOL)hasChanges;
-(void)setAddressBook:(void*)arg1 ;
-(void)setDisplayedProperties:(CFArrayRef)arg1 ;
-(void)setAllowsSounds:(BOOL)arg1 ;
-(void)setAllowsActions:(BOOL)arg1 ;
-(void)setDelegate:(id<ABPersonTableViewDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<ABPersonTableViewDataSourceDelegate>)delegate;
-(void)sizeToFit;
-(ABPersonTableView *)tableView;
-(ABPersonTableHeaderView *)tableHeaderView;
-(void)setTableView:(ABPersonTableView *)arg1 ;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2 ;
-(double)marginForTableView:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(id)viewForFooterInTableView:(id)arg1 ;
-(void)setTableHeaderView:(ABPersonTableHeaderView *)arg1 ;
-(ABPersonTableFooterView *)tableFooterView;
-(void)setEditing:(BOOL)arg1 ;
-(NSString *)message;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)setAllowsSharing:(BOOL)arg1 ;
-(BOOL)canSave;
-(NSString *)attribution;
-(void)setPeople:(NSArray *)arg1 ;
-(NSArray *)people;
-(void*)addressBook;
@end

