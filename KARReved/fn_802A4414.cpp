//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_802854CC.hpp"
#include "fn_80285130.hpp"



void fn_802A4414(PPC::Runtime::GCContext* context)
{
/*802A4414 002A1214*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802A4418 002A1218*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A441C 002A121C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A4420 002A1220*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A4424 002A1224*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802A4428 002A1228*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802A442C 002A122C  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802A4430 002A1230*/ PPC::Runtime::ASM::beq(.L_802A4508);
/*802A4434 002A1234*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C3BAC @ Get_MemoryOffset_HighBit);
/*802A4438 002A1238*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xddc);
/*802A443C 002A123C*/ PPC::Runtime::ASM::addi(context->r6, context->r4, lbl_804C3BAC @ Get_MemoryOffset_LowBit);
/*802A4440 002A1240*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4444 002A1244*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A4448 002A1248*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x10);
/*802A444C 002A124C*/ PPC::Runtime::ASM::addi(context->r0, context->r6, 0x58);
/*802A4450 002A1250*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A4454 002A1254*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*802A4458 002A1258*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A445C 002A125C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xcd8);
/*802A4460 002A1260*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4464 002A1264*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4468 002A1268*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xbd4);
/*802A446C 002A126C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4470 002A1270*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4474 002A1274*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xad0);
/*802A4478 002A1278*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A447C 002A127C*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4480 002A1280*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x9cc);
/*802A4484 002A1284*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4488 002A1288*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A448C 002A128C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8c8);
/*802A4490 002A1290*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A4494 002A1294*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A4498 002A1298*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x7c4);
/*802A449C 002A129C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A44A0 002A12A0*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A44A4 002A12A4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x6c0);
/*802A44A8 002A12A8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A44AC 002A12AC*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A44B0 002A12B0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5bc);
/*802A44B4 002A12B4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A44B8 002A12B8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A44BC 002A12BC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x4b8);
/*802A44C0 002A12C0*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A44C4 002A12C4*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A44C8 002A12C8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3b4);
/*802A44CC 002A12CC*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A44D0 002A12D0*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A44D4 002A12D4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2b0);
/*802A44D8 002A12D8*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A44DC 002A12DC*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A44E0 002A12E0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*802A44E4 002A12E4*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A44E8 002A12E8*/ PPC::Runtime::ASM::bl(fn_802854CC);
/*802A44EC 002A12EC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A44F0 002A12F0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802A44F4 002A12F4*/ PPC::Runtime::ASM::bl(fn_80285130);
/*802A44F8 002A12F8*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802A44FC 002A12FC*/ PPC::Runtime::ASM::ble(.L_802A4508);
/*802A4500 002A1300*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A4504 002A1304*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802A4508, 0x802A4508) //this is a jump label
/*802A4508 002A1308*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A450C 002A130C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A4510 002A1310*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A4514 002A1314*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A4518 002A1318*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A451C 002A131C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802A4520 002A1320*/ PPC::Runtime::ASM::blr();
}