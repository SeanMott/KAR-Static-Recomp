//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801E1260(PPC::Runtime::GCContext* context)
{
/*801E1260 001DE060*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r3));
/*801E1264 001DE064*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 25);
/*801E1268 001DE068*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*801E126C 001DE06C*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*801E1270 001DE070*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*801E1274 001DE074*/ PPC::Runtime::ASM::blr();
}