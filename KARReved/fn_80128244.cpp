//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80112058.hpp"
#include "fn_80059520.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"



void fn_80128244(PPC::Runtime::GCContext* context)
{
/*80128244 00125044*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80128248 00125048*/ PPC::Runtime::ASM::mflr(context->r0);
/*8012824C 0012504C*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1099 @ Get_MemoryOffset_HighBit);
/*80128250 00125050*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80128254 00125054*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80128258 00125058*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8012825C 0012505C*/ PPC::Runtime::ASM::addi(context->r30, context->r3, MemoryOffset_1099 @ Get_MemoryOffset_LowBit);
/*80128260 00125060*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80128264 00125064*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80128268 00125068*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0xb70);
/*8012826C 0012506C*/ PPC::Runtime::ASM::bl(fn_80112058);
/*80128270 00125070*/ PPC::Runtime::ASM::lwz(context->r0, SkipAddress_73 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80128274 00125074*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80128278 00125078*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8012827C 0012507C*/ PPC::Runtime::ASM::beq(.L_8012829C);
/*80128280 00125080*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80128284 00125084*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*80128288 00125088*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x0);
/*8012828C 0012508C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80128290 00125090*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80128294 00125094*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80128298 00125098*/ PPC::Runtime::ASM::b(.L_8012830C);
RUNTIME_PPC_JUMP_LABEL(.L_8012829C, 0x8012829C) //this is a jump label
/*8012829C 0012509C*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*801282A0 001250A0*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*801282A4 001250A4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*801282A8 001250A8*/ PPC::Runtime::ASM::beq(.L_801282D8);
/*801282AC 001250AC*/ PPC::Runtime::ASM::bge(.L_801282F4);
/*801282B0 001250B0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*801282B4 001250B4*/ PPC::Runtime::ASM::bge(.L_801282BC);
/*801282B8 001250B8*/ PPC::Runtime::ASM::b(.L_801282F4);
RUNTIME_PPC_JUMP_LABEL(.L_801282BC, 0x801282BC) //this is a jump label
/*801282BC 001250BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801282C0 001250C0*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*801282C4 001250C4*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x0);
/*801282C8 001250C8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801282CC 001250CC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801282D0 001250D0*/ PPC::Runtime::ASM::bl(fn_80059520);
/*801282D4 001250D4*/ PPC::Runtime::ASM::b(.L_8012830C);
RUNTIME_PPC_JUMP_LABEL(.L_801282D8, 0x801282D8) //this is a jump label
/*801282D8 001250D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801282DC 001250DC*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x4);
/*801282E0 001250E0*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x18);
/*801282E4 001250E4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801282E8 001250E8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*801282EC 001250EC*/ PPC::Runtime::ASM::bl(fn_80059520);
/*801282F0 001250F0*/ PPC::Runtime::ASM::b(.L_8012830C);
RUNTIME_PPC_JUMP_LABEL(.L_801282F4, 0x801282F4) //this is a jump label
/*801282F4 001250F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801282F8 001250F8*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x8);
/*801282FC 001250FC*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x34);
/*80128300 00125100*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80128304 00125104*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80128308 00125108*/ PPC::Runtime::ASM::bl(fn_80059520);
RUNTIME_PPC_JUMP_LABEL(.L_8012830C, 0x8012830C) //this is a jump label
/*8012830C 0012510C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80128310 00125110*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80128314 00125114*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80128318 00125118*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012831C 0012511C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80128320 00125120*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80128324 00125124*/ PPC::Runtime::ASM::blr();
}