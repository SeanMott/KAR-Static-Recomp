//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8019DE04(PPC::Runtime::GCContext* context)
{
/*8019DE04 0019AC04*/ PPC::Runtime::ASM::mulli(context->r5, context->r4, 0x24);
/*8019DE08 0019AC08*/ PPC::Runtime::ASM::slwi(context->r4, context->r4, 2);
/*8019DE0C 0019AC0C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8019DE10 0019AC10*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r4);
/*8019DE14 0019AC14*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r5);
/*8019DE18 0019AC18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x510, context->r3));
/*8019DE1C 0019AC1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x514, context->r3));
/*8019DE20 0019AC20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x518, context->r3));
/*8019DE24 0019AC24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51c, context->r3));
/*8019DE28 0019AC28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x520, context->r3));
/*8019DE2C 0019AC2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x524, context->r3));
/*8019DE30 0019AC30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x528, context->r3));
/*8019DE34 0019AC34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x52c, context->r3));
/*8019DE38 0019AC38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x530, context->r3));
/*8019DE3C 0019AC3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x57c, context->r4));
/*8019DE40 0019AC40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x504, context->r4));
/*8019DE44 0019AC44*/ PPC::Runtime::ASM::blr();
}