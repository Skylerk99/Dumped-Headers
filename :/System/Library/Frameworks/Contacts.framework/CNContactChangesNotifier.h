/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNMutableMultiDictionary, CNContactStore;

@interface CNContactChangesNotifier : NSObject {

	BOOL _observingNotification;
	CNMutableMultiDictionary* _registeredObservers;
	CNContactStore* _contactStore;

}

@property (nonatomic,retain) CNMutableMultiDictionary * registeredObservers;              //@synthesize registeredObservers=_registeredObservers - In the implementation block
@property (assign) BOOL observingNotification;                                            //@synthesize observingNotification=_observingNotification - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                               //@synthesize contactStore=_contactStore - In the implementation block
+(id)sharedNotifier;
-(id)initWithContactStore:(id)arg1 ;
-(void)_updateObserving;
-(BOOL)_unregisterObserver:(id)arg1 forIdentifier:(id)arg2 ;
-(id)_fetchers;
-(void)registerObserver:(id)arg1 forContact:(id)arg2 ;
-(CNMutableMultiDictionary *)registeredObservers;
-(void)setRegisteredObservers:(CNMutableMultiDictionary *)arg1 ;
-(BOOL)observingNotification;
-(void)setObservingNotification:(BOOL)arg1 ;
-(void)unregisterObserver:(id)arg1 forContact:(id)arg2 ;
-(void)registerObserver:(id)arg1 forContact:(id)arg2 keysToFetch:(id)arg3 ;
-(CNContactStore *)contactStore;
-(id)init;
-(void)_updateObservers;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)contactStoreDidChange:(id)arg1 ;
@end

