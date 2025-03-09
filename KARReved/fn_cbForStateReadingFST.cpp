//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_stateTimeout.hpp"
#include "__DVDFSInit.hpp"
#include "stateReady.hpp"
#include "fn_stateGettingError_2.hpp"



void fn_cbForStateReadingFST(PPC::Runtime::GCContext* context)
{
/*803C58DC 003C26DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C58E0 003C26E0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x10);
/*803C58E4 003C26E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803C58E8 003C26E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803C58EC 003C26EC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C58F0 003C26F0*/ PPC::Runtime::ASM::bne(.L_803C5908);
/*803C58F4 003C26F4*/ PPC::Runtime::ASM::lwz(context->r3, executing_805DDDA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C58F8 003C26F8*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*803C58FC 003C26FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*803C5900 003C2700*/ PPC::Runtime::ASM::bl(fn_stateTimeout);
/*803C5904 003C2704*/ PPC::Runtime::ASM::b(.L_803C5954);
RUNTIME_PPC_JUMP_LABEL(.L_803C5908, 0x803C5908) //this is a jump label
/* 803C5908 003C2708  54 60 07 FF */ clrlwi. context->r0 , context->r3 , 31
/*803C590C 003C270C*/ PPC::Runtime::ASM::beq(.L_803C5950);
/*803C5910 003C2710*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*803C5914 003C2714*/ PPC::Runtime::ASM::stw(context->r31, STRUCT_BYTE4_COUNT_1805DDDDC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C5918 003C2718*/ PPC::Runtime::ASM::bl(__DVDFSInit);
/*803C591C 003C271C*/ PPC::Runtime::ASM::lis(context->r3, DummyCommandBlock_8056CC60 @ Get_MemoryOffset_HighBit);
/*803C5920 003C2720*/ PPC::Runtime::ASM::lwz(context->r4, executing_805DDDA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C5924 003C2724*/ PPC::Runtime::ASM::addi(context->r0, context->r3, DummyCommandBlock_8056CC60 @ Get_MemoryOffset_LowBit);
/*803C5928 003C2728*/ PPC::Runtime::ASM::stw(context->r0, executing_805DDDA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C592C 003C272C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*803C5930 003C2730*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*803C5934 003C2734*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*803C5938 003C2738*/ PPC::Runtime::ASM::beq(.L_803C5948);
/*803C593C 003C273C*/ PPC::Runtime::ASM::mtlr(context->r12);
/*803C5940 003C2740*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/* 803C5944 003C2744  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_803C5948, 0x803C5948) //this is a jump label
/*803C5948 003C2748*/ PPC::Runtime::ASM::bl(stateReady);
/*803C594C 003C274C*/ PPC::Runtime::ASM::b(.L_803C5954);
RUNTIME_PPC_JUMP_LABEL(.L_803C5950, 0x803C5950) //this is a jump label
/*803C5950 003C2750*/ PPC::Runtime::ASM::bl(fn_stateGettingError_2);
RUNTIME_PPC_JUMP_LABEL(.L_803C5954, 0x803C5954) //this is a jump label
/*803C5954 003C2754*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803C5958 003C2758*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C595C 003C275C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803C5960 003C2760*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C5964 003C2764*/ PPC::Runtime::ASM::blr();
}