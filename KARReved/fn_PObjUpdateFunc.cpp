//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_PObjUpdateFunc(PPC::Runtime::GCContext* context)
{
/*804054AC 004022AC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*804054B0 004022B0*/ PPC::Runtime::ASM::beqlr();
/*804054B4 004022B4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*804054B8 004022B8*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 18, 19);
/*804054BC 004022BC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1000);
/*804054C0 004022C0*/ PPC::Runtime::ASM::bnelr();
/*804054C4 004022C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*804054C8 004022C8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*804054CC 004022CC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 30, 30);
/*804054D0 004022D0*/ PPC::Runtime::ASM::beq(.L_804054EC);
/*804054D4 004022D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*804054D8 004022D8*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 2);
/*804054DC 004022DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*804054E0 004022E0*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*804054E4 004022E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r3));
/*804054E8 004022E8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_804054EC, 0x804054EC) //this is a jump label
/*804054EC 004022EC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*804054F0 004022F0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*804054F4 004022F4*/ PPC::Runtime::ASM::blr();
}