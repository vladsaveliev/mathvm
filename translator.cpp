#include "mathvm.h"
#include "parser.h"
#include "visitors.h"

#include "bc_translator.h"
// #include "jit.h"

namespace mathvm {

// Implement me!
Translator* Translator::create(const string& impl) {
    if (impl == "" || impl == "intepreter") {
        return new BytecodeTranslator();
    }
    if (impl == "jit") {
        // return new MachCodeTranslator();
    }
    assert(false);
    return 0;
}

}
