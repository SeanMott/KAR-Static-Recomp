//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80295924(PPC::Runtime::GCContext* context)
{
/*80295924 00292724*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80295928 00292728*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8029592C 0029272C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80295930 00292730*/ PPC::Runtime::ASM::bne(.L_8029594C);
/*80295934 00292734*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80295938 00292738*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8029593C 0029273C*/ PPC::Runtime::ASM::bne(.L_8029594C);
/*80295940 00292740*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDAE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295944 00292744*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*80295948 00292748*/ PPC::Runtime::ASM::bne(.L_80295950);
RUNTIME_PPC_JUMP_LABEL(.L_8029594C, 0x8029594C) //this is a jump label
/*8029594C 0029274C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80295950, 0x80295950) //this is a jump label
/*80295950 00292750*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*80295954 00292754*/ PPC::Runtime::ASM::blr();
}