//
//  CTMediator+Author.h
//  FFAuthorKit_Category
//
//  Created by suxx on 2018/11/22.
//


#import <CTMediator/CTMediator.h>
#import <FFAPIsKit/APIRequest.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTMediator (Author)
- (UIViewController*)authorDetailViewController;

- (NSDictionary*)authorReformerWithOriginData:(NSDictionary*)data;

- (NSDictionary *)authorReformer;

- (APIRequest*)authorAPIRequest;


@end

NS_ASSUME_NONNULL_END
