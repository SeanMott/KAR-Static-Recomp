//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_SetUpStadiumSelectScreen(PPC::Runtime::GCContext* context)
{
/*8013D570 0013A370*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8013D574 0013A374*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013D578 0013A378*/ PPC::Runtime::ASM::lis(context->r3, String_Filename_Dat_ "SisSelmap2d.da" Get_MemoryOffset_HighBit);
/*8013D57C 0013A37C*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_1168 @ Get_MemoryOffset_HighBit);
/*8013D580 0013A380*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013D584 0013A384*/ PPC::Runtime::ASM::addi(context->r4, context->r3, String_Filename_Dat_ "SisSelmap2d.da" Get_MemoryOffset_LowBit);
/*8013D588 0013A388*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8013D58C 0013A38C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, MemoryOffset_1168 @ Get_MemoryOffset_LowBit);
/*8013D590 0013A390*/ PPC::Runtime::ASM::bl(fn_SomeFuncToDoWithTheStatdiumTitlesAndOtherShit);
/*8013D594 0013A394*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013D598 0013A398*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8013D59C 0013A39C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8013D5A0 0013A3A0*/ PPC::Runtime::ASM::blr();
}