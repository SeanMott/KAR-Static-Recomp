//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8043070C.hpp"
#include "fn_HSD_SListRemove.hpp"
#include "fn_HSD_JObjUnref.hpp"
#include "fn___assert.hpp"
#include "fn_HSD_JObjSetupMatrixSub.hpp"
#include "fn_HSD_MtxGetScale.hpp"
#include "fn_HSD_MtxGetRotation.hpp"
#include "fn_HSD_Randf.hpp"
#include "fn_804309E8.hpp"
#include "fn_8042B94C.hpp"
#include "fn_80437FCC.hpp"
#include "fn_HSD_JObjUnref.hpp"



void fn_804324EC(PPC::Runtime::GCContext* context)
{
/*804324EC 0042F2EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*804324F0 0042F2F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*804324F4 0042F2F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804324F8 0042F2F8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*804324FC 0042F2FC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80432500 0042F300*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*80432504 0042F304*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80432508 0042F308*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8043250C 0042F30C*/ PPC::Runtime::ASM::b(.L_8043253C);
RUNTIME_PPC_JUMP_LABEL(.L_80432510, 0x80432510) //this is a jump label
/*80432510 0042F310*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80432514 0042F314*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80432518 0042F318*/ PPC::Runtime::ASM::bl(fn_8043070C);
/*8043251C 0042F31C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE370 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432520 0042F320*/ PPC::Runtime::ASM::bl(fn_HSD_SListRemove);
/*80432524 0042F324*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DE370 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432528 0042F328*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8043252C 0042F32C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80432530 0042F330*/ PPC::Runtime::ASM::beq(.L_8043253C);
/*80432534 0042F334*/ PPC::Runtime::ASM::bl(fn_HSD_JObjUnref);
/*80432538 0042F338*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8043253C, 0x8043253C) //this is a jump label
/*8043253C 0042F33C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE370 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432540 0042F340*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80432544 0042F344*/ PPC::Runtime::ASM::bne(.L_80432510);
/*80432548 0042F348*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8043254C 0042F34C*/ PPC::Runtime::ASM::lwz(context->r30, STRUCT_BYTE4_COUNT_1805DE378 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432550 0042F350*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE374 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432554 0042F354*/ PPC::Runtime::ASM::b(.L_8043287C);
RUNTIME_PPC_JUMP_LABEL(.L_80432558, 0x80432558) //this is a jump label
/*80432558 0042F358*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x19, context->r30));
/*8043255C 0042F35C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80432560 0042F360*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x10);
/*80432564 0042F364*/ PPC::Runtime::ASM::slw(context->r0, context->r4, context->r0);
/*80432568 0042F368*/ PPC::Runtime::ASM::and.(context->r0, context->r29, context->r0);
/*8043256C 0042F36C*/ PPC::Runtime::ASM::beq(.L_8043257C);
/*80432570 0042F370*/ PPC::Runtime::ASM::stw(context->r30, STRUCT_BYTE4_COUNT_1805DE374 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432574 0042F374*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80432578 0042F378*/ PPC::Runtime::ASM::b(.L_8043287C);
RUNTIME_PPC_JUMP_LABEL(.L_8043257C, 0x8043257C) //this is a jump label
/*8043257C 0042F37C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80432580 0042F380*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 20, 20);
/*80432584 0042F384*/ PPC::Runtime::ASM::beq(.L_80432594);
/*80432588 0042F388*/ PPC::Runtime::ASM::stw(context->r30, STRUCT_BYTE4_COUNT_1805DE374 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8043258C 0042F38C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80432590 0042F390*/ PPC::Runtime::ASM::b(.L_8043287C);
RUNTIME_PPC_JUMP_LABEL(.L_80432594, 0x80432594) //this is a jump label
/*80432594 0042F394*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r30));
/*80432598 0042F398*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 23, 23);
/*8043259C 0042F39C*/ PPC::Runtime::ASM::beq(.L_804326C4);
/*804325A0 0042F3A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*804325A4 0042F3A4*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*804325A8 0042F3A8*/ PPC::Runtime::ASM::beq(.L_804326C4);
/*804325AC 0042F3AC*/ PPC::Runtime::ASM::beq(.L_804325F0);
/*804325B0 0042F3B0*/ PPC::Runtime::ASM::bne(.L_804325C4);
/*804325B4 0042F3B4*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_471 @ Get_MemoryOffset_SDA21);
/*804325B8 0042F3B8*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*804325BC 0042F3BC*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_470 @ Get_MemoryOffset_SDA21);
/*804325C0 0042F3C0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_804325C4, 0x804325C4) //this is a jump label
/*804325C4 0042F3C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*804325C8 0042F3C8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*804325CC 0042F3CC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*804325D0 0042F3D0*/ PPC::Runtime::ASM::bne(.L_804325E0);
/*804325D4 0042F3D4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*804325D8 0042F3D8*/ PPC::Runtime::ASM::beq(.L_804325E0);
/*804325DC 0042F3DC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_804325E0, 0x804325E0) //this is a jump label
/*804325E0 0042F3E0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*804325E4 0042F3E4*/ PPC::Runtime::ASM::beq(.L_804325F0);
/*804325E8 0042F3E8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*804325EC 0042F3EC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_804325F0, 0x804325F0) //this is a jump label
/*804325F0 0042F3F0*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r30));
/*804325F4 0042F3F4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 22, 22);
/*804325F8 0042F3F8*/ PPC::Runtime::ASM::beq(.L_80432620);
/*804325FC 0042F3FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80432600 0042F400*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r3));
/*80432604 0042F404*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80432608 0042F408*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8043260C 0042F40C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r3));
/*80432610 0042F410*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80432614 0042F414*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80432618 0042F418*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r3));
/*8043261C 0042F41C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80432620, 0x80432620) //this is a jump label
/*80432620 0042F420*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r30));
/*80432624 0042F424*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 20, 20);
/*80432628 0042F428*/ PPC::Runtime::ASM::beq(.L_80432670);
/*8043262C 0042F42C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*80432630 0042F430*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80432634 0042F434*/ PPC::Runtime::ASM::beq(.L_80432670);
/*80432638 0042F438*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8043263C 0042F43C*/ PPC::Runtime::ASM::cmplw(context->r0, context->r30);
/*80432640 0042F440*/ PPC::Runtime::ASM::bne(.L_80432670);
/*80432644 0042F444*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80432648 0042F448*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r3));
/*8043264C 0042F44C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80432650 0042F450*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80432654 0042F454*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*80432658 0042F458*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r4));
/*8043265C 0042F45C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80432660 0042F460*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80432664 0042F464*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*80432668 0042F468*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r4));
/*8043266C 0042F46C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80432670, 0x80432670) //this is a jump label
/*80432670 0042F470*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r30));
/*80432674 0042F474*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 19, 19);
/*80432678 0042F478*/ PPC::Runtime::ASM::beq(.L_804326A4);
/*8043267C 0042F47C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*80432680 0042F480*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80432684 0042F484*/ PPC::Runtime::ASM::beq(.L_804326A4);
/*80432688 0042F488*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8043268C 0042F48C*/ PPC::Runtime::ASM::cmplw(context->r0, context->r30);
/*80432690 0042F490*/ PPC::Runtime::ASM::bne(.L_804326A4);
/*80432694 0042F494*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80432698 0042F498*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x24);
/*8043269C 0042F49C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x44);
/*804326A0 0042F4A0*/ PPC::Runtime::ASM::bl(fn_HSD_MtxGetScale);
RUNTIME_PPC_JUMP_LABEL(.L_804326A4, 0x804326A4) //this is a jump label
/*804326A4 0042F4A4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r30));
/*804326A8 0042F4A8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 18, 18);
/*804326AC 0042F4AC*/ PPC::Runtime::ASM::beq(.L_804326C4);
/*804326B0 0042F4B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*804326B4 0042F4B4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*804326B8 0042F4B8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x44);
/*804326BC 0042F4BC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x14);
/*804326C0 0042F4C0*/ PPC::Runtime::ASM::bl(fn_HSD_MtxGetRotation);
RUNTIME_PPC_JUMP_LABEL(.L_804326C4, 0x804326C4) //this is a jump label
/*804326C4 0042F4C4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*804326C8 0042F4C8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5F20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804326CC 0042F4CC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*804326D0 0042F4D0*/ PPC::Runtime::ASM::bge(.L_804326E4);
/*804326D4 0042F4D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*804326D8 0042F4D8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*804326DC 0042F4DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*804326E0 0042F4E0*/ PPC::Runtime::ASM::b(.L_8043270C);
RUNTIME_PPC_JUMP_LABEL(.L_804326E4, 0x804326E4) //this is a jump label
/*804326E4 0042F4E4*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f1);
/*804326E8 0042F4E8*/ PPC::Runtime::ASM::bne(.L_804326F8);
/*804326EC 0042F4EC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*804326F0 0042F4F0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*804326F4 0042F4F4*/ PPC::Runtime::ASM::beq(.L_8043270C);
RUNTIME_PPC_JUMP_LABEL(.L_804326F8, 0x804326F8) //this is a jump label
/*804326F8 0042F4F8*/ PPC::Runtime::ASM::bl(fn_HSD_Randf);
/*804326FC 0042F4FC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80432700 0042F500*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80432704 0042F504*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f1, context->f0);
/*80432708 0042F508*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8043270C, 0x8043270C) //this is a jump label
/*8043270C 0042F50C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80432710 0042F510*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5F24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432714 0042F514*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80432718 0042F518*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8043271C 0042F51C*/ PPC::Runtime::ASM::bne(.L_8043272C);
/*80432720 0042F520*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80432724 0042F524*/ PPC::Runtime::ASM::bl(fn_804309E8);
/*80432728 0042F528*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8043272C, 0x8043272C) //this is a jump label
/*8043272C 0042F52C*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80432730 0042F530*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80432734 0042F534*/ PPC::Runtime::ASM::beq(.L_80432874);
/*80432738 0042F538*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x1);
/* 8043273C 0042F53C  54 60 04 3F */ clrlwi. context->r0 , context->r3 , 16
/*80432740 0042F540*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80432744 0042F544*/ PPC::Runtime::ASM::bne(.L_80432874);
/*80432748 0042F548*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r30));
/*8043274C 0042F54C*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1805DE374 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432750 0042F550*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 24, 24);
/*80432754 0042F554*/ PPC::Runtime::ASM::beq(.L_80432760);
/*80432758 0042F558*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8043275C 0042F55C*/ PPC::Runtime::ASM::bl(fn_8042B94C);
RUNTIME_PPC_JUMP_LABEL(.L_80432760, 0x80432760) //this is a jump label
/*80432760 0042F560*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r30));
/*80432764 0042F564*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80432768 0042F568*/ PPC::Runtime::ASM::beq(.L_80432784);
/*8043276C 0042F56C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5F20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432770 0042F570*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80432774 0042F574*/ PPC::Runtime::ASM::mr(context->r31, context->r30);
/*80432778 0042F578*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8043277C 0042F57C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80432780 0042F580*/ PPC::Runtime::ASM::b(.L_80432858);
RUNTIME_PPC_JUMP_LABEL(.L_80432784, 0x80432784) //this is a jump label
/*80432784 0042F584*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x16, context->r30));
/*80432788 0042F588*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 23, 23);
/*8043278C 0042F58C*/ PPC::Runtime::ASM::beq(.L_804327E0);
/*80432790 0042F590*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80432794 0042F594*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80432798 0042F598*/ PPC::Runtime::ASM::beq(.L_804327E0);
/*8043279C 0042F59C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 18, 20);
/*804327A0 0042F5A0*/ PPC::Runtime::ASM::beq(.L_804327E0);
/*804327A4 0042F5A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*804327A8 0042F5A8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*804327AC 0042F5AC*/ PPC::Runtime::ASM::beq(.L_804327E0);
/*804327B0 0042F5B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*804327B4 0042F5B4*/ PPC::Runtime::ASM::cmplw(context->r0, context->r30);
/*804327B8 0042F5B8*/ PPC::Runtime::ASM::bne(.L_804327E0);
/*804327BC 0042F5BC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e, context->r3));
/*804327C0 0042F5C0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*804327C4 0042F5C4*/ PPC::Runtime::ASM::beq(.L_804327E0);
/*804327C8 0042F5C8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5F20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804327CC 0042F5CC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*804327D0 0042F5D0*/ PPC::Runtime::ASM::mr(context->r31, context->r30);
/*804327D4 0042F5D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*804327D8 0042F5D8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*804327DC 0042F5DC*/ PPC::Runtime::ASM::b(.L_80432858);
RUNTIME_PPC_JUMP_LABEL(.L_804327E0, 0x804327E0) //this is a jump label
/*804327E0 0042F5E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r30));
/*804327E4 0042F5E4*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*804327E8 0042F5E8*/ PPC::Runtime::ASM::beq(.L_804327F8);
/*804327EC 0042F5EC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*804327F0 0042F5F0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*804327F4 0042F5F4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_804327F8, 0x804327F8) //this is a jump label
/*804327F8 0042F5F8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*804327FC 0042F5FC*/ PPC::Runtime::ASM::bne(.L_8043280C);
/*80432800 0042F600*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80432804 0042F604*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE378 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432808 0042F608*/ PPC::Runtime::ASM::b(.L_80432814);
RUNTIME_PPC_JUMP_LABEL(.L_8043280C, 0x8043280C) //this is a jump label
/*8043280C 0042F60C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80432810 0042F610*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80432814, 0x80432814) //this is a jump label
/*80432814 0042F614*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r30));
/*80432818 0042F618*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8043281C 0042F61C*/ PPC::Runtime::ASM::beq(.L_80432828);
/*80432820 0042F620*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80432824 0042F624*/ PPC::Runtime::ASM::bl(fn_80437FCC);
RUNTIME_PPC_JUMP_LABEL(.L_80432828, 0x80432828) //this is a jump label
/*80432828 0042F628*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE37C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8043282C 0042F62C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80432830 0042F630*/ PPC::Runtime::ASM::lhz(context->r3, SkipAddress_23 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432834 0042F634*/ PPC::Runtime::ASM::stw(context->r30, STRUCT_BYTE4_COUNT_1805DE37C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432838 0042F638*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8043283C 0042F63C*/ PPC::Runtime::ASM::sth(context->r0, SkipAddress_23 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432840 0042F640*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80432844 0042F644*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80432848 0042F648*/ PPC::Runtime::ASM::beq(.L_80432858);
/*8043284C 0042F64C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjUnref);
/*80432850 0042F650*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80432854 0042F654*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80432858, 0x80432858) //this is a jump label
/*80432858 0042F658*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8043285C 0042F65C*/ PPC::Runtime::ASM::stw(context->r31, STRUCT_BYTE4_COUNT_1805DE374 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432860 0042F660*/ PPC::Runtime::ASM::beq(.L_8043286C);
/*80432864 0042F664*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80432868 0042F668*/ PPC::Runtime::ASM::b(.L_8043287C);
RUNTIME_PPC_JUMP_LABEL(.L_8043286C, 0x8043286C) //this is a jump label
/*8043286C 0042F66C*/ PPC::Runtime::ASM::lwz(context->r30, STRUCT_BYTE4_COUNT_1805DE378 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432870 0042F670*/ PPC::Runtime::ASM::b(.L_8043287C);
RUNTIME_PPC_JUMP_LABEL(.L_80432874, 0x80432874) //this is a jump label
/*80432874 0042F674*/ PPC::Runtime::ASM::stw(context->r30, STRUCT_BYTE4_COUNT_1805DE374 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432878 0042F678*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8043287C, 0x8043287C) //this is a jump label
/*8043287C 0042F67C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80432880 0042F680*/ PPC::Runtime::ASM::bne(.L_80432558);
/*80432884 0042F684*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80432888 0042F688*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8043288C 0042F68C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80432890 0042F690*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80432894 0042F694*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80432898 0042F698*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8043289C 0042F69C*/ PPC::Runtime::ASM::blr();
}