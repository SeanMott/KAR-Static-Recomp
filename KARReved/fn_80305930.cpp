//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80305930(PPC::Runtime::GCContext* context)
{
/*80305930 00302730*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80305934 00302734*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80305938 00302738*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8030593C 0030273C*/ PPC::Runtime::ASM::bne(.L_80305958);
/*80305940 00302740*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80305944 00302744*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80305948 00302748*/ PPC::Runtime::ASM::bne(.L_80305958);
/*8030594C 0030274C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDC0C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80305950 00302750*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*80305954 00302754*/ PPC::Runtime::ASM::bne(.L_8030595C);
RUNTIME_PPC_JUMP_LABEL(.L_80305958, 0x80305958) //this is a jump label
/*80305958 00302758*/ PPC::Runtime::ASM::li(context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8030595C, 0x8030595C) //this is a jump label
/*8030595C 0030275C*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*80305960 00302760*/ PPC::Runtime::ASM::blr();
}