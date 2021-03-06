/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:46 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPCTTypesetterCache : NSObject {

	map<unsigned long, boost::shared_ptr<TSWPParagraphTypesetter>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, boost::shared_ptr<TSWPParagraphTypesetter> > > >* _typesetters;

}
-(void)removeTypesetterForParagraphIndex:(unsigned long long)arg1 ;
-(shared_ptr<TSWPParagraphTypesetter>*)cachedTypesetterForParagraphIdentifier:(unsigned long long)arg1 ;
-(void)addTypesetterForParagraphIdentifier:(unsigned long long)arg1 typesetter:(shared_ptr<TSWPParagraphTypesetter>*)arg2 ;
-(void)p_limitCacheSize:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)clearCache;
@end

