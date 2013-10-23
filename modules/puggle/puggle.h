#include <default_gui_model.h>
#include <qstring.h>

class Puggle : public DefaultGUIModel
{
	Q_OBJECT

	public:

		Puggle(void);
		virtual
			~Puggle(void);

		void
			execute(void);
		void
			createGUI(DefaultGUIModel::variable_t *, int);

	protected:

		virtual void
			update(DefaultGUIModel::update_flags_t);

	private:

		QString ip_addr;
		double f_s;
		double state;
		double period;

		private slots:
			// these are custom functions that can also be connected
			// to events through the Qt API. they must be implemented
			// in puggle.cpp

		void connect(void);
		void disconnect(void);
};
