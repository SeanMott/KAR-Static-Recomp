//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8037B33C.hpp"
#include "fn_8037AFD0.hpp"
#include "fn_8037B028.hpp"
#include "fn_80379784.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"



void fn_803334CC(PPC::Runtime::GCContext* context)
{
/*803334CC 003302CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*803334D0 003302D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*803334D4 003302D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*803334D8 003302D8*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*803334DC 003302DC*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*803334E0 003302E0*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*803334E4 003302E4*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*803334E8 003302E8*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*803334EC 003302EC*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*803334F0 003302F0*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*803334F4 003302F4*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*803334F8 003302F8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*803334FC 003302FC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80333500 00330300*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x178, context->r3));
/*80333504 00330304*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80333508 00330308*/ PPC::Runtime::ASM::bne(.L_803337A8);
/*8033350C 0033030C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80333510 00330310*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80333514 00330314*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x178, context->r31));
/*80333518 00330318*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xe0);
/*8033351C 0033031C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80333520 00330320*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x91, context->r31));
/*80333524 00330324*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*80333528 00330328*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8033352C 0033032C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80333530 00330330*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*80333534 00330334*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80333538 00330338*/ PPC::Runtime::ASM::bctrl();
/*8033353C 0033033C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80333540 00330340*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80333544 00330344*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80333548 00330348*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8033354C 0033034C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x94);
/*80333550 00330350*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80333554 00330354*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80333558 00330358*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8033355C 0033035C*/ PPC::Runtime::ASM::bl(fn_8037AFD0);
/*80333560 00330360*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80333564 00330364*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x94);
/*80333568 00330368*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8033356C 0033036C*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x10);
/*80333570 00330370*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80333574 00330374*/ PPC::Runtime::ASM::li(context->r4, 0x2777);
/*80333578 00330378*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8033357C 0033037C*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*80333580 00330380*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80333584 00330384*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80333588 00330388*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8033358C 0033038C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80333590 00330390*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*80333594 00330394*/ PPC::Runtime::ASM::lis(context->r4, 0x8);
/*80333598 00330398*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x12c);
/*8033359C 0033039C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x20);
/*803335A0 003303A0*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x168);
/*803335A4 003303A4*/ PPC::Runtime::ASM::bl(fn_80379784);
/*803335A8 003303A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803335AC 003303AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803335B0 003303B0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*803335B4 003303B4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803335B8 003303B8*/ PPC::Runtime::ASM::bctrl();
/*803335BC 003303BC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1ac, context->r31));
/*803335C0 003303C0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*803335C4 003303C4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1ac);
/*803335C8 003303C8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*803335CC 003303CC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803335D0 003303D0*/ PPC::Runtime::ASM::bctrl();
/*803335D4 003303D4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803335D8 003303D8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803335DC 003303DC*/ PPC::Runtime::ASM::li(context->r5, lbl_805DA9A8 @ Get_MemoryOffset_SDA21);
/*803335E0 003303E0*/ PPC::Runtime::ASM::li(context->r6, lbl_805DA9A0 @ Get_MemoryOffset_SDA21);
/*803335E4 003303E4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803335E8 003303E8*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803335EC 003303EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*803335F0 003303F0*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_FLOAT_10 @ Get_MemoryOffset_HighBit);
/*803335F4 003303F4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_FLOAT_10 @ Get_MemoryOffset_LowBit);
/*803335F8 003303F8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1ac);
/*803335FC 003303FC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80333600 00330400*/ PPC::Runtime::ASM::bne(.L_8033360C);
/*80333604 00330404*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_FLOAT_9 @ Get_MemoryOffset_HighBit);
/*80333608 00330408*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_FLOAT_9 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_8033360C, 0x8033360C) //this is a jump label
/*8033360C 0033040C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80333610 00330410*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r4));
/*80333614 00330414*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*80333618 00330418*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033361C 0033041C*/ PPC::Runtime::ASM::bctrl();
/*80333620 00330420*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80333624 00330424*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80333628 00330428*/ PPC::Runtime::ASM::li(context->r5, lbl_805DA9A8 @ Get_MemoryOffset_SDA21);
/*8033362C 0033042C*/ PPC::Runtime::ASM::li(context->r6, lbl_805DA9A0 @ Get_MemoryOffset_SDA21);
/*80333630 00330430*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80333634 00330434*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80333638 00330438*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8033363C 0033043C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_FLOAT_10 @ Get_MemoryOffset_HighBit);
/*80333640 00330440*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_FLOAT_10 @ Get_MemoryOffset_LowBit);
/*80333644 00330444*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80333648 00330448*/ PPC::Runtime::ASM::bne(.L_80333654);
/*8033364C 0033044C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_FLOAT_9 @ Get_MemoryOffset_HighBit);
/*80333650 00330450*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_FLOAT_9 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80333654, 0x80333654) //this is a jump label
/*80333654 00330454*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r3));
/*80333658 00330458*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*8033365C 0033045C*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c0, context->r31));
/*80333660 00330460*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80333664 00330464*/ PPC::Runtime::ASM::li(context->r5, lbl_805DA9A8 @ Get_MemoryOffset_SDA21);
/*80333668 00330468*/ PPC::Runtime::ASM::li(context->r6, lbl_805DA9A0 @ Get_MemoryOffset_SDA21);
/*8033366C 0033046C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80333670 00330470*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80333674 00330474*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80333678 00330478*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8033367C 0033047C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_FLOAT_10 @ Get_MemoryOffset_HighBit);
/*80333680 00330480*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_FLOAT_10 @ Get_MemoryOffset_LowBit);
/*80333684 00330484*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*80333688 00330488*/ PPC::Runtime::ASM::bne(.L_80333694);
/*8033368C 0033048C*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_FLOAT_9 @ Get_MemoryOffset_HighBit);
/*80333690 00330490*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_FLOAT_9 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80333694, 0x80333694) //this is a jump label
/*80333694 00330494*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r3));
/*80333698 00330498*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4124 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033369C 0033049C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*803336A0 003304A0*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*803336A4 003304A4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E416C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803336A8 003304A8*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*803336AC 003304AC*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*803336B0 003304B0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4168 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803336B4 003304B4*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*803336B8 003304B8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f31);
/*803336BC 003304BC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4124 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803336C0 003304C0*/ PPC::Runtime::ASM::fmuls(context->f29, context->f1, context->f0);
/*803336C4 003304C4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*803336C8 003304C8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*803336CC 003304CC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4124 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803336D0 003304D0*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*803336D4 003304D4*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*803336D8 003304D8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4170 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803336DC 003304DC*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*803336E0 003304E0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f31);
/*803336E4 003304E4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4124 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803336E8 003304E8*/ PPC::Runtime::ASM::fmuls(context->f28, context->f1, context->f0);
/*803336EC 003304EC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*803336F0 003304F0*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*803336F4 003304F4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E416C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803336F8 003304F8*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*803336FC 003304FC*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*80333700 00330500*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4168 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80333704 00330504*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*80333708 00330508*/ PPC::Runtime::ASM::fmuls(context->f0, context->f30, context->f29);
/*8033370C 0033050C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4124 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80333710 00330510*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f31);
/*80333714 00330514*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80333718 00330518*/ PPC::Runtime::ASM::li(context->r5, lbl_805DA9A8 @ Get_MemoryOffset_SDA21);
/*8033371C 0033051C*/ PPC::Runtime::ASM::li(context->r6, lbl_805DA9A0 @ Get_MemoryOffset_SDA21);
/*80333720 00330520*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f28);
/*80333724 00330524*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80333728 00330528*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*8033372C 0033052C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80333730 00330530*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80333734 00330534*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80333738 00330538*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8033373C 0033053C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80333740 00330540*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r31));
/*80333744 00330544*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80333748 00330548*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8033374C 0033054C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80333750 00330550*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_FLOAT_10 @ Get_MemoryOffset_HighBit);
/*80333754 00330554*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_FLOAT_10 @ Get_MemoryOffset_LowBit);
/*80333758 00330558*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*8033375C 0033055C*/ PPC::Runtime::ASM::bne(.L_80333768);
/*80333760 00330560*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_FLOAT_9 @ Get_MemoryOffset_HighBit);
/*80333764 00330564*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_FLOAT_9 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80333768, 0x80333768) //this is a jump label
/*80333768 00330568*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r3));
/*8033376C 0033056C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80333770 00330570*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4120 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80333774 00330574*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x54);
/*80333778 00330578*/ PPC::Runtime::ASM::fctiwz(context->f1, context->f1);
/*8033377C 0033057C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80333780 00330580*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80333784 00330584*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80333788 00330588*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c2, context->r31));
/*8033378C 0033058C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x194, context->r31));
/*80333790 00330590*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80333794 00330594*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80333798 00330598*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*8033379C 0033059C*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*803337A0 003305A0*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*803337A4 003305A4*/ PPC::Runtime::ASM::bl(fn_removeBigStarModel);
RUNTIME_PPC_JUMP_LABEL(.L_803337A8, 0x803337A8) //this is a jump label
/*803337A8 003305A8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*803337AC 003305AC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*803337B0 003305B0*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*803337B4 003305B4*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*803337B8 003305B8*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*803337BC 003305BC*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*803337C0 003305C0*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*803337C4 003305C4*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*803337C8 003305C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*803337CC 003305CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*803337D0 003305D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803337D4 003305D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*803337D8 003305D8*/ PPC::Runtime::ASM::blr();
}