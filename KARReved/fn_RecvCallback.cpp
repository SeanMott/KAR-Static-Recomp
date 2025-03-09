//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_memcmp.hpp"
#include "fn_DHCPProcessOptions.hpp"
#include "memmove.hpp"
#include "fn_DHCPRequest.hpp"
#include "fn_UpdateDHCPInfo.hpp"
#include "fn_Claim.hpp"
#include "fn_Stop.hpp"
#include "fn_IPSetConfigError.hpp"
#include "fn_UpdateDHCPInfo.hpp"
#include "fn_Start.hpp"
#include "fn_Stop.hpp"
#include "fn_IPSetConfigError.hpp"
#include "fn_UpdateDHCPInfo.hpp"
#include "fn_Claim.hpp"
#include "fn_Stop.hpp"
#include "fn_IPSetConfigError.hpp"
#include "fn_Restart.hpp"
#include "fn_RecvCallback.hpp"
#include "fn_RecvCallback.hpp"
#include "fn_UDPReceiveAsync.hpp"



void fn_RecvCallback(PPC::Runtime::GCContext* context)
{
/*80478308 00475108*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047830C 0047510C*/ PPC::Runtime::ASM::cmpwi(context->r4, 0xf1);
/*80478310 00475110*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80478314 00475114*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*80478318 00475118*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8047831C 0047511C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*80478320 00475120*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80478324 00475124*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x104);
/*80478328 00475128*/ PPC::Runtime::ASM::blt(.L_8047855C);
/*8047832C 0047512C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80478330 00475130*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r31));
/*80478334 00475134*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80478338 00475138*/ PPC::Runtime::ASM::bne(.L_8047855C);
/*8047833C 0047513C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
/*80478340 00475140*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80478344 00475144*/ PPC::Runtime::ASM::bne(.L_8047855C);
/*80478348 00475148*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*8047834C 0047514C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x6);
/*80478350 00475150*/ PPC::Runtime::ASM::bne(.L_8047855C);
/*80478354 00475154*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_HighBit);
/*80478358 00475158*/ PPC::Runtime::ASM::addi(context->r4, context->r3, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_LowBit);
/*8047835C 0047515C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1c);
/*80478360 00475160*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x38);
/*80478364 00475164*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*80478368 00475168*/ PPC::Runtime::ASM::bl(fn_memcmp);
/*8047836C 0047516C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80478370 00475170*/ PPC::Runtime::ASM::bne(.L_8047855C);
/*80478374 00475174*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r31));
/*80478378 00475178*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*8047837C 0047517C*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x504);
/*80478380 00475180*/ PPC::Runtime::ASM::bl(fn_DHCPProcessOptions);
/*80478384 00475184*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80478388 00475188*/ PPC::Runtime::ASM::blt(.L_8047855C);
/*8047838C 0047518C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r31));
/*80478390 00475190*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80478394 00475194*/ PPC::Runtime::ASM::beq(.L_8047855C);
/*80478398 00475198*/ PPC::Runtime::ASM::bge(.L_804783AC);
/*8047839C 0047519C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*804783A0 004751A0*/ PPC::Runtime::ASM::beq(.L_804783C4);
/*804783A4 004751A4*/ PPC::Runtime::ASM::bge(.L_80478420);
/*804783A8 004751A8*/ PPC::Runtime::ASM::b(.L_8047855C);
RUNTIME_PPC_JUMP_LABEL(.L_804783AC, 0x804783AC) //this is a jump label
/*804783AC 004751AC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7);
/*804783B0 004751B0*/ PPC::Runtime::ASM::beq(.L_804784C8);
/*804783B4 004751B4*/ PPC::Runtime::ASM::bge(.L_8047855C);
/*804783B8 004751B8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x6);
/*804783BC 004751BC*/ PPC::Runtime::ASM::bge(.L_8047855C);
/*804783C0 004751C0*/ PPC::Runtime::ASM::b(.L_80478474);
RUNTIME_PPC_JUMP_LABEL(.L_804783C4, 0x804783C4) //this is a jump label
/*804783C4 004751C4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*804783C8 004751C8*/ PPC::Runtime::ASM::bne(.L_8047855C);
/*804783CC 004751CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x620, context->r31));
/*804783D0 004751D0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*804783D4 004751D4*/ PPC::Runtime::ASM::beq(.L_8047855C);
/*804783D8 004751D8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3d8);
/*804783DC 004751DC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x504);
/*804783E0 004751E0*/ PPC::Runtime::ASM::li(context->r5, 0x12c);
/*804783E4 004751E4*/ PPC::Runtime::ASM::bl(memmove);
/*804783E8 004751E8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804783EC 004751EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*804783F0 004751F0*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*804783F4 004751F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r31));
/*804783F8 004751F8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x630, context->r31));
/*804783FC 004751FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r31));
/*80478400 00475200*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 80478404 00475204  4E 80 00 21 */ blrl
/*80478408 00475208*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r31));
/*8047840C 0047520C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*80478410 00475210*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*80478414 00475214*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r31));
/*80478418 00475218*/ PPC::Runtime::ASM::bl(fn_DHCPRequest);
/*8047841C 0047521C*/ PPC::Runtime::ASM::b(.L_80478580);
RUNTIME_PPC_JUMP_LABEL(.L_80478420, 0x80478420) //this is a jump label
/*80478420 00475220*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x6);
/*80478424 00475224*/ PPC::Runtime::ASM::beq(.L_8047845C);
/*80478428 00475228*/ PPC::Runtime::ASM::bge(.L_8047855C);
/*8047842C 0047522C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x5);
/*80478430 00475230*/ PPC::Runtime::ASM::bge(.L_80478438);
/*80478434 00475234*/ PPC::Runtime::ASM::b(.L_8047855C);
RUNTIME_PPC_JUMP_LABEL(.L_80478438, 0x80478438) //this is a jump label
/*80478438 00475238*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x620, context->r31));
/*8047843C 0047523C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80478440 00475240*/ PPC::Runtime::ASM::beq(.L_80478580);
/*80478444 00475244*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3d8);
/*80478448 00475248*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x504);
/*8047844C 0047524C*/ PPC::Runtime::ASM::bl(fn_UpdateDHCPInfo);
/*80478450 00475250*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80478454 00475254*/ PPC::Runtime::ASM::bl(fn_Claim);
/*80478458 00475258*/ PPC::Runtime::ASM::b(.L_80478580);
RUNTIME_PPC_JUMP_LABEL(.L_8047845C, 0x8047845C) //this is a jump label
/*8047845C 0047525C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80478460 00475260*/ PPC::Runtime::ASM::bl(fn_Stop);
/*80478464 00475264*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80478468 00475268*/ PPC::Runtime::ASM::li(context->r4, -0x66);
/*8047846C 0047526C*/ PPC::Runtime::ASM::bl(fn_IPSetConfigError);
/*80478470 00475270*/ PPC::Runtime::ASM::b(.L_80478580);
RUNTIME_PPC_JUMP_LABEL(.L_80478474, 0x80478474) //this is a jump label
/*80478474 00475274*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x6);
/*80478478 00475278*/ PPC::Runtime::ASM::beq(.L_804784B0);
/*8047847C 0047527C*/ PPC::Runtime::ASM::bge(.L_8047855C);
/*80478480 00475280*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x5);
/*80478484 00475284*/ PPC::Runtime::ASM::bge(.L_8047848C);
/*80478488 00475288*/ PPC::Runtime::ASM::b(.L_8047855C);
RUNTIME_PPC_JUMP_LABEL(.L_8047848C, 0x8047848C) //this is a jump label
/*8047848C 0047528C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x620, context->r31));
/*80478490 00475290*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80478494 00475294*/ PPC::Runtime::ASM::beq(.L_80478580);
/*80478498 00475298*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3d8);
/*8047849C 0047529C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x504);
/*804784A0 004752A0*/ PPC::Runtime::ASM::bl(fn_UpdateDHCPInfo);
/*804784A4 004752A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*804784A8 004752A8*/ PPC::Runtime::ASM::bl(fn_Start);
/*804784AC 004752AC*/ PPC::Runtime::ASM::b(.L_80478580);
RUNTIME_PPC_JUMP_LABEL(.L_804784B0, 0x804784B0) //this is a jump label
/*804784B0 004752B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*804784B4 004752B4*/ PPC::Runtime::ASM::bl(fn_Stop);
/*804784B8 004752B8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*804784BC 004752BC*/ PPC::Runtime::ASM::li(context->r4, -0x66);
/*804784C0 004752C0*/ PPC::Runtime::ASM::bl(fn_IPSetConfigError);
/*804784C4 004752C4*/ PPC::Runtime::ASM::b(.L_80478580);
RUNTIME_PPC_JUMP_LABEL(.L_804784C8, 0x804784C8) //this is a jump label
/*804784C8 004752C8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x6);
/*804784CC 004752CC*/ PPC::Runtime::ASM::beq(.L_80478504);
/*804784D0 004752D0*/ PPC::Runtime::ASM::bge(.L_8047855C);
/*804784D4 004752D4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x5);
/*804784D8 004752D8*/ PPC::Runtime::ASM::bge(.L_804784E0);
/*804784DC 004752DC*/ PPC::Runtime::ASM::b(.L_8047855C);
RUNTIME_PPC_JUMP_LABEL(.L_804784E0, 0x804784E0) //this is a jump label
/*804784E0 004752E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x620, context->r31));
/*804784E4 004752E4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*804784E8 004752E8*/ PPC::Runtime::ASM::beq(.L_80478580);
/*804784EC 004752EC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3d8);
/*804784F0 004752F0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x504);
/*804784F4 004752F4*/ PPC::Runtime::ASM::bl(fn_UpdateDHCPInfo);
/*804784F8 004752F8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*804784FC 004752FC*/ PPC::Runtime::ASM::bl(fn_Claim);
/*80478500 00475300*/ PPC::Runtime::ASM::b(.L_80478580);
RUNTIME_PPC_JUMP_LABEL(.L_80478504, 0x80478504) //this is a jump label
/*80478504 00475304*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80478508 00475308*/ PPC::Runtime::ASM::bl(fn_Stop);
/*8047850C 0047530C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80478510 00475310*/ PPC::Runtime::ASM::li(context->r4, -0x66);
/*80478514 00475314*/ PPC::Runtime::ASM::bl(fn_IPSetConfigError);
/*80478518 00475318*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r31));
/*8047851C 0047531C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 30, 30);
/*80478520 00475320*/ PPC::Runtime::ASM::bne(.L_80478580);
/*80478524 00475324*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*80478528 00475328*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r3));
/*8047852C 0047532C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80478530 00475330*/ PPC::Runtime::ASM::li(context->r3, 0x12c);
/*80478534 00475334*/ PPC::Runtime::ASM::srwi(context->r6, context->r0, 2);
/*80478538 00475338*/ PPC::Runtime::ASM::mullw(context->r4, context->r5, context->r3);
/*8047853C 0047533C*/ PPC::Runtime::ASM::mulhwu(context->r0, context->r6, context->r3);
/*80478540 00475340*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*80478544 00475344*/ PPC::Runtime::ASM::mullw(context->r0, context->r6, context->r5);
/*80478548 00475348*/ PPC::Runtime::ASM::mullw(context->r6, context->r6, context->r3);
/*8047854C 0047534C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*80478550 00475350*/ PPC::Runtime::ASM::add(context->r5, context->r4, context->r0);
/*80478554 00475354*/ PPC::Runtime::ASM::bl(fn_Restart);
/*80478558 00475358*/ PPC::Runtime::ASM::b(.L_80478580);
RUNTIME_PPC_JUMP_LABEL(.L_8047855C, 0x8047855C) //this is a jump label
/*8047855C 0047535C*/ PPC::Runtime::ASM::lis(context->r3, fn_RecvCallback @ Get_MemoryOffset_HighBit);
/*80478560 00475360*/ PPC::Runtime::ASM::addi(context->r8, context->r3, fn_RecvCallback @ Get_MemoryOffset_LowBit);
/*80478564 00475364*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*80478568 00475368*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x104);
/*8047856C 0047536C*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0xfc);
/*80478570 00475370*/ PPC::Runtime::ASM::li(context->r5, 0x218);
/*80478574 00475374*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80478578 00475378*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*8047857C 0047537C*/ PPC::Runtime::ASM::bl(fn_UDPReceiveAsync);
RUNTIME_PPC_JUMP_LABEL(.L_80478580, 0x80478580) //this is a jump label
/*80478580 00475380*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80478584 00475384*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80478588 00475388*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8047858C 0047538C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*80478590 00475390*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80478594 00475394*/ PPC::Runtime::ASM::blr();
}