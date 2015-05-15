# Drupal
The litmos and litmos_feature modules will import your courses from the Litmos Learning Platform by CallidusCloud into your Drupal site as nodes.

After enabling the modules, you will see the Litmos settings in the admin configuration page.
Enter your Litmos API credentials to enable the automatic course sync (via Drupal cron).
Course import will import all fields available from Litmos into Drupal node fields.
You may enable the course view using the views module.
Course sign in without authenticating with Litmos can be used by accessing ?q=litmos/course/<original_course_id>
There is also a node field called Single Sign-On Link that contains the sso url.
Users must have their Litmos username entered in their profile to use the sign-in links.

