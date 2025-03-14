//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "__DVDStoreErrorCode.hpp"
#include "DVDReset.hpp"
#include "cbForStateError.hpp"
#include "stateReady.hpp"
#include "stateBusy_803C6A0C.hpp"
#include "fn_cbForStateGettingError.hpp"
#include "fn_cbForStateGettingError.hpp"
#include "fn_DVDLowRequestError.hpp"



void fn_cbForStateCheckID3(PPC::Runtime::GCContext* context)
{
/*803C6424 003C3224*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C6428 003C3228*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x10);
/*803C642C 003C322C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803C6430 003C3230*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803C6434 003C3234*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C6438 003C3238*/ PPC::Runtime::ASM::bne(.L_803C6464);
/*803C643C 003C323C*/ PPC::Runtime::ASM::lwz(context->r4, executing_805DDDA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C6440 003C3240*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*803C6444 003C3244*/ PPC::Runtime::ASM::lis(context->r3, 0x123);
/*803C6448 003C3248*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*803C644C 003C324C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4568);
/*803C6450 003C3250*/ PPC::Runtime::ASM::bl(__DVDStoreErrorCode);
/*803C6454 003C3254*/ PPC::Runtime::ASM::bl(DVDReset);
/*803C6458 003C3258*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803C645C 003C325C*/ PPC::Runtime::ASM::bl(cbForStateError);
/*803C6460 003C3260*/ PPC::Runtime::ASM::b(.L_803C650C);
RUNTIME_PPC_JUMP_LABEL(.L_803C6464, 0x803C6464) //this is a jump label
/* 803C6464 003C3264  54 60 07 FF */ clrlwi. context->r0 , context->r3 , 31
/*803C6468 003C3268*/ PPC::Runtime::ASM::beq(.L_803C6500);
/*803C646C 003C326C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803C6470 003C3270*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DDDDC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C6474 003C3274*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDDC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C6478 003C3278*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803C647C 003C327C*/ PPC::Runtime::ASM::beq(.L_803C64E0);
/*803C6480 003C3280*/ PPC::Runtime::ASM::stw(context->r4, ResumeFromHere_805DDDD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C6484 003C3284*/ PPC::Runtime::ASM::lis(context->r3, DummyCommandBlock_8056CC60 @ Get_MemoryOffset_HighBit);
/*803C6488 003C3288*/ PPC::Runtime::ASM::lwz(context->r31, executing_805DDDA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C648C 003C328C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, DummyCommandBlock_8056CC60 @ Get_MemoryOffset_LowBit);
/*803C6490 003C3290*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DDDC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C6494 003C3294*/ PPC::Runtime::ASM::li(context->r0, 0xa);
/*803C6498 003C3298*/ PPC::Runtime::ASM::stw(context->r3, executing_805DDDA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C649C 003C329C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803C64A0 003C32A0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*803C64A4 003C32A4*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*803C64A8 003C32A8*/ PPC::Runtime::ASM::beq(.L_803C64BC);
/*803C64AC 003C32AC*/ PPC::Runtime::ASM::mtlr(context->r12);
/*803C64B0 003C32B0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*803C64B4 003C32B4*/ PPC::Runtime::ASM::li(context->r3, -0x3);
/* 803C64B8 003C32B8  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_803C64BC, 0x803C64BC) //this is a jump label
/*803C64BC 003C32BC*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DDDCC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C64C0 003C32C0*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*803C64C4 003C32C4*/ PPC::Runtime::ASM::beq(.L_803C64D8);
/*803C64C8 003C32C8*/ PPC::Runtime::ASM::mtlr(context->r12);
/*803C64CC 003C32CC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*803C64D0 003C32D0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/* 803C64D4 003C32D4  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_803C64D8, 0x803C64D8) //this is a jump label
/*803C64D8 003C32D8*/ PPC::Runtime::ASM::bl(stateReady);
/*803C64DC 003C32DC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803C64E0, 0x803C64E0) //this is a jump label
/*803C64E0 003C32E0*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*803C64E4 003C32E4*/ PPC::Runtime::ASM::bne(.L_803C650C);
/*803C64E8 003C32E8*/ PPC::Runtime::ASM::lwz(context->r3, executing_805DDDA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C64EC 003C32EC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803C64F0 003C32F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*803C64F4 003C32F4*/ PPC::Runtime::ASM::lwz(context->r3, executing_805DDDA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C64F8 003C32F8*/ PPC::Runtime::ASM::bl(stateBusy_803C6A0C);
/*803C64FC 003C32FC*/ PPC::Runtime::ASM::b(.L_803C650C);
RUNTIME_PPC_JUMP_LABEL(.L_803C6500, 0x803C6500) //this is a jump label
/*803C6500 003C3300*/ PPC::Runtime::ASM::lis(context->r3, fn_cbForStateGettingError @ Get_MemoryOffset_HighBit);
/*803C6504 003C3304*/ PPC::Runtime::ASM::addi(context->r3, context->r3, fn_cbForStateGettingError @ Get_MemoryOffset_LowBit);
/*803C6508 003C3308*/ PPC::Runtime::ASM::bl(fn_DVDLowRequestError);
RUNTIME_PPC_JUMP_LABEL(.L_803C650C, 0x803C650C) //this is a jump label
/*803C650C 003C330C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803C6510 003C3310*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C6514 003C3314*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803C6518 003C3318*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C651C 003C331C*/ PPC::Runtime::ASM::blr();
}