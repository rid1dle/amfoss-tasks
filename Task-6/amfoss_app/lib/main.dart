import 'package:flutter/material.dart';
import 'package:introduction_screen/introduction_screen.dart';
import 'package:dots_indicator/dots_indicator.dart';

void main() => runApp(MyApp());

class MyApp extends StatelessWidget {
  // Color colorApp = const Color(0xffd6cbc7);
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: IntroPage(),
    );
  }
}

class IntroPage extends StatelessWidget {
  void _EndWelcomePage(context) {
    Navigator.pop(context);
    Navigator.of(context).push(MaterialPageRoute(builder: (_) => HomeScreen()));
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: IntroductionScreen(
        globalBackgroundColor: const Color(0xffd6cbc7),
        pages: listPagesViewModel(),
        onDone: () {
          _EndWelcomePage(context);
        },
        showSkipButton: true,
        skip: const Text('Skip'),
        showNextButton: true,
        next: const Text('Next'),
        // next: const Icon(Icons.next),
        done: const Text("Get Started",
            style: TextStyle(fontWeight: FontWeight.w600)),
        dotsDecorator: DotsDecorator(
            size: const Size.square(10.0),
            activeSize: const Size(20.0, 10.0),
            // activeColor: theme.accentColor,
            color: Colors.black26,
            spacing: const EdgeInsets.symmetric(horizontal: 3.0),
            activeShape: RoundedRectangleBorder(
                borderRadius: BorderRadius.circular(25.0))),
      ),
    );
  }

  List<PageViewModel> listPagesViewModel() {
    return [
      PageViewModel(
          image: Center(
            // child: Image.asset('image/page1.png')//, height: 175.0),
            // child: Image.asset('/home/himanshu/StudioProjects/amfoss_app/image')//, height: 175.0),
            child: Image.asset('image/page1.png'),
          ),
          title: 'YOGA SURGE',
          body: 'Welcome to Yoga World',
          footer: const Text('Inhale the future, Exhale the Past'),
          decoration: const PageDecoration(
          )),
      PageViewModel(
          image: Center(
            child: Image.asset("image/page2.png"),
          ),
          title: 'Healthy Freak Exercises',
          body: 'Letting Go is the Hardest Part',
          decoration: const PageDecoration(
          )),
      PageViewModel(
          image: Center(
            child: Image.asset("image/page3.png"),
          ),
          title: 'Cycling',
          body:
              'You cannot always control what goes on outside. But you can always control what goes on inside.',
          decoration: const PageDecoration(
          )),
      PageViewModel(
          image: Center(
            child: Image.asset("image/page4.png"),
          ),
          title: 'Meditation',
          body: 'The longest journey of any person is the journey inwards.',
          decoration: const PageDecoration(
          ))
    ];
  }
}

class HomeScreen extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
        appBar: AppBar(title: const Text('Welcome'), backgroundColor: const Color(0xffd6cbc7),),
        body: Row(
            mainAxisSize: MainAxisSize.max,
            children: <Widget>[
          Column(
              // crossAxisAlignment: CrossAxisAlignment.end,
              children: <Widget>[
                Image.asset('image/welcome.png'),
                const Text('Himanshu Lath', textScaleFactor: 2),
                const Text(
                  'A free spirited guy.. Who loves to try out new things',
                  textScaleFactor: 1,
                )
              ])
        ]));
  }
}
