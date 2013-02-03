// Default empty project template
#ifndef Bb10WebviewApp_HPP_
#define Bb10WebviewApp_HPP_

#include <QObject>

namespace bb { namespace cascades { class Application; }}

/*!
 * @brief Application pane object
 *
 *Use this object to create and init app UI, to create context objects, to register the new meta types etc.
 */
class Bb10WebviewApp : public QObject
{
    Q_OBJECT
public:
    Bb10WebviewApp(bb::cascades::Application *app);
    virtual ~Bb10WebviewApp() {}
};


#endif /* Bb10WebviewApp_HPP_ */
