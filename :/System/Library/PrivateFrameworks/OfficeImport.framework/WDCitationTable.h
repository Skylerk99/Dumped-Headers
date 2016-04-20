/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:49 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDDocument, NSMutableDictionary;

@interface WDCitationTable : NSObject {

	WDDocument* mDocument;
	NSMutableDictionary* mCitations;

}
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(id)document;
-(id)initWithDocument:(id)arg1 ;
-(id)citationFor:(id)arg1 ;
-(void)addCitation:(id)arg1 forID:(id)arg2 ;
-(id)citationIDs;
@end

