//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80112044.hpp"
#include "fn_80112058.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"



void fn_80125940(PPC::Runtime::GCContext* context)
{
/*80125940 00122740*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80125944 00122744*/ PPC::Runtime::ASM::mflr(context->r0);
/*80125948 00122748*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012594C 0012274C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80125950 00122750*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80125954 00122754*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80125958 00122758*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8012595C 0012275C*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0xb40);
/*80125960 00122760*/ PPC::Runtime::ASM::bl(fn_80112058);
/*80125964 00122764*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80125968 00122768*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*8012596C 0012276C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80125970 00122770*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80125974 00122774*/ PPC::Runtime::ASM::beq(.L_80125988);
/*80125978 00122778*/ PPC::Runtime::ASM::bge(.L_801259A8);
/*8012597C 0012277C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80125980 00122780*/ PPC::Runtime::ASM::bge(.L_801259C4);
/*80125984 00122784*/ PPC::Runtime::ASM::b(.L_801259A8);
RUNTIME_PPC_JUMP_LABEL(.L_80125988, 0x80125988) //this is a jump label
/*80125988 00122788*/ PPC::Runtime::ASM::lis(context->r4, String_Debug_ "ScInfGpos2_scene_model" Get_MemoryOffset_HighBit);
/*8012598C 0012278C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80125990 00122790*/ PPC::Runtime::ASM::addi(context->r5, context->r4, String_Debug_ "ScInfGpos2_scene_model" Get_MemoryOffset_LowBit);
/*80125994 00122794*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80125998 00122798*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8012599C 0012279C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801259A0 001227A0*/ PPC::Runtime::ASM::bl(fn_80059520);
/*801259A4 001227A4*/ PPC::Runtime::ASM::b(.L_801259C4);
RUNTIME_PPC_JUMP_LABEL(.L_801259A8, 0x801259A8) //this is a jump label
/*801259A8 001227A8*/ PPC::Runtime::ASM::lis(context->r4, String_Debug_ "ScInfGpos4_scene_model" Get_MemoryOffset_HighBit);
/*801259AC 001227AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801259B0 001227B0*/ PPC::Runtime::ASM::addi(context->r5, context->r4, String_Debug_ "ScInfGpos4_scene_model" Get_MemoryOffset_LowBit);
/*801259B4 001227B4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801259B8 001227B8*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x4);
/*801259BC 001227BC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801259C0 001227C0*/ PPC::Runtime::ASM::bl(fn_80059520);
RUNTIME_PPC_JUMP_LABEL(.L_801259C4, 0x801259C4) //this is a jump label
/*801259C4 001227C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801259C8 001227C8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801259CC 001227CC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801259D0 001227D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801259D4 001227D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801259D8 001227D8*/ PPC::Runtime::ASM::blr();
}