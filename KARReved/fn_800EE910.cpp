//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800EE910(PPC::Runtime::GCContext* context)
{
/*800EE910 000EB710*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD6F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800EE914 000EB714*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800EE918 000EB718*/ PPC::Runtime::ASM::beq(.L_800EE934);
/*800EE91C 000EB71C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800EE920 000EB720*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800EE924 000EB724*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800EE928 000EB728*/ PPC::Runtime::ASM::bne(.L_800EE934);
/*800EE92C 000EB72C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*800EE930 000EB730*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800EE934, 0x800EE934) //this is a jump label
/*800EE934 000EB734*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800EE938 000EB738*/ PPC::Runtime::ASM::blr();
}