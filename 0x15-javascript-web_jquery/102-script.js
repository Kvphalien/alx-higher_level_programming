$(document).ready(function() {

  $('INPUT#btn_translate').click(function() {
    const languageCode = $('INPUT#language_code').val();

    $.ajax({
      url: https://www.fourtonfish.com/hellosalut/hello/${languageCode},
      success: function(data) {
        $('DIV#hello').text(data.hello);
      },
      error: function() {
        $('DIV#hello').text('Error fetching translation.');
      }
    });
  });

});