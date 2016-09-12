#include <iostream>
#include <string>
#include <boost/filesystem.hpp>

int main(){

  //const std::string target_path( "" );
  //const boost::regex my_filter( "somefiles.*\.txt" );

  //std::vector< std::string > all_matching_files;

  boost::filesystem::directory_iterator end_itr; // Default ctor yields past-the-end

  //for( boost::filesystem::directory_iterator i( target_path ); i != end_itr; ++i ){
    // Skip if not a file
    //if( !boost::filesystem::is_regular_file( i->status() ) ) continue;

    //boost::smatch what;

    // Skip if no match
    //if( !boost::regex_match( i->leaf(), what, my_filter ) ) continue;

    // File matches, store it
  //all_matching_files.push_back( i->leaf() );
  //}
}
