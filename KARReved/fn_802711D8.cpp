//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C7648.hpp"
#include "fn_80275FCC.hpp"
#include "fn_802708A0.hpp"
#include "fn_80262FDC.hpp"
#include "fn_8026D1FC.hpp"
#include "fn_800B8AAC.hpp"
#include "fn_800B8B04.hpp"
#include "fn_800B8B5C.hpp"
#include "fn_80262FDC.hpp"
#include "fn_80262FDC.hpp"
#include "fn_80262FDC.hpp"
#include "fn_80276650.hpp"
#include "fn_80276050.hpp"
#include "fn_80276050.hpp"
#include "fn_801C7DA4.hpp"
#include "fn_801C7D94.hpp"



void fn_802711D8(PPC::Runtime::GCContext* context)
{
/*802711D8 0026DFD8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xe0, context->r1));
/*802711DC 0026DFDC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802711E0 0026DFE0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*802711E4 0026DFE4*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*802711E8 0026DFE8*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1)0, context->qr0);
/*802711EC 0026DFEC*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*802711F0 0026DFF0*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1)0, context->qr0);
/*802711F4 0026DFF4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r1));
/*802711F8 0026DFF8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1));
/*802711FC 0026DFFC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*80271200 0026E000*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80271204 0026E004*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r3));
/*80271208 0026E008*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x778, context->r3));
/*8027120C 0026E00C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80271210 0026E010*/ PPC::Runtime::ASM::beq(.L_80271228);
/*80271214 0026E014*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80271218 0026E018*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*8027121C 0026E01C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80271220 0026E020*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80271224 0026E024*/ PPC::Runtime::ASM::b(.L_8027157C);
RUNTIME_PPC_JUMP_LABEL(.L_80271228, 0x80271228) //this is a jump label
/*80271228 0026E028*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*8027122C 0026E02C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80271230 0026E030*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*80271234 0026E034*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r30));
/*80271238 0026E038*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8027123C 0026E03C*/ PPC::Runtime::ASM::beq(.L_8027124C);
/*80271240 0026E040*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x7c);
/*80271244 0026E044*/ PPC::Runtime::ASM::bl(fn_801C7648);
/*80271248 0026E048*/ PPC::Runtime::ASM::b(.L_80271264);
RUNTIME_PPC_JUMP_LABEL(.L_8027124C, 0x8027124C) //this is a jump label
/*8027124C 0026E04C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r30));
/*80271250 0026E050*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r30));
/*80271254 0026E054*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*80271258 0026E058*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8027125C 0026E05C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r30));
/*80271260 0026E060*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80271264, 0x80271264) //this is a jump label
/*80271264 0026E064*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*80271268 0026E068*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FCC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027126C 0026E06C*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E2FC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80271270 0026E070*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*80271274 0026E074*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*80271278 0026E078*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8027127C 0026E07C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3170 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80271280 0026E080*/ PPC::Runtime::ASM::fmadds(context->f1, context->f2, context->f3, context->f1);
/*80271284 0026E084*/ PPC::Runtime::ASM::fmadds(context->f1, context->f4, context->f3, context->f1);
/*80271288 0026E088*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8027128C 0026E08C*/ PPC::Runtime::ASM::bge(.L_802712B0);
/*80271290 0026E090*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*80271294 0026E094*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xa);
/*80271298 0026E098*/ PPC::Runtime::ASM::ble(.L_802712B0);
/*8027129C 0026E09C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802712A0 0026E0A0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802712A4 0026E0A4*/ PPC::Runtime::ASM::bl(fn_80275FCC);
/*802712A8 0026E0A8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802712AC 0026E0AC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802712B0, 0x802712B0) //this is a jump label
/*802712B0 0026E0B0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802712B4 0026E0B4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x70);
/*802712B8 0026E0B8*/ PPC::Runtime::ASM::bl(fn_802708A0);
/*802712BC 0026E0BC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x70);
/*802712C0 0026E0C0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x64);
/*802712C4 0026E0C4*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*802712C8 0026E0C8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802712CC 0026E0CC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802712D0 0026E0D0*/ PPC::Runtime::ASM::blt(.L_802714F8);
/*802712D4 0026E0D4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3100 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802712D8 0026E0D8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802712DC 0026E0DC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x64);
/*802712E0 0026E0E0*/ PPC::Runtime::ASM::bl(fn_8026D1FC);
/*802712E4 0026E0E4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x778, context->r30));
/*802712E8 0026E0E8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x28);
/*802712EC 0026E0EC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802712F0 0026E0F0*/ PPC::Runtime::ASM::bl(fn_800B8AAC);
/*802712F4 0026E0F4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802712F8 0026E0F8*/ PPC::Runtime::ASM::beq(.L_802714F8);
/*802712FC 0026E0FC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80271300 0026E100*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x1c);
/*80271304 0026E104*/ PPC::Runtime::ASM::bl(fn_800B8B04);
/*80271308 0026E108*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8027130C 0026E10C*/ PPC::Runtime::ASM::beq(.L_802714F8);
/*80271310 0026E110*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80271314 0026E114*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x34);
/*80271318 0026E118*/ PPC::Runtime::ASM::bl(fn_800B8B5C);
/*8027131C 0026E11C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80271320 0026E120*/ PPC::Runtime::ASM::beq(.L_802714F8);
/*80271324 0026E124*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80271328 0026E128*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x4c);
/*8027132C 0026E12C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80271330 0026E130*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80271334 0026E134*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80271338 0026E138*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8027133C 0026E13C*/ PPC::Runtime::ASM::fsubs(context->f5, context->f3, context->f2);
/*80271340 0026E140*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80271344 0026E144*/ PPC::Runtime::ASM::fsubs(context->f4, context->f1, context->f0);
/*80271348 0026E148*/ PPC::Runtime::ASM::lfs(context->f7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8027134C 0026E14C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80271350 0026E150*/ PPC::Runtime::ASM::fmuls(context->f1, context->f5, context->f6);
/*80271354 0026E154*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80271358 0026E158*/ PPC::Runtime::ASM::lfs(context->f8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8027135C 0026E15C*/ PPC::Runtime::ASM::fsubs(context->f3, context->f2, context->f0);
/*80271360 0026E160*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80271364 0026E164*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f7);
/*80271368 0026E168*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8027136C 0026E16C*/ PPC::Runtime::ASM::fmuls(context->f2, context->f3, context->f8);
/*80271370 0026E170*/ PPC::Runtime::ASM::fmsubs(context->f1, context->f3, context->f7, context->f1);
/*80271374 0026E174*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80271378 0026E178*/ PPC::Runtime::ASM::fmsubs(context->f0, context->f5, context->f8, context->f0);
/*8027137C 0026E17C*/ PPC::Runtime::ASM::fmsubs(context->f2, context->f4, context->f6, context->f2);
/*80271380 0026E180*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80271384 0026E184*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80271388 0026E188*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8027138C 0026E18C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80271390 0026E190*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80271394 0026E194*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80271398 0026E198*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8027139C 0026E19C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802713A0 0026E1A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802713A4 0026E1A4*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*802713A8 0026E1A8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802713AC 0026E1AC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802713B0 0026E1B0*/ PPC::Runtime::ASM::blt(.L_802714F8);
/*802713B4 0026E1B4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x40);
/*802713B8 0026E1B8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802713BC 0026E1BC*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*802713C0 0026E1C0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802713C4 0026E1C4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802713C8 0026E1C8*/ PPC::Runtime::ASM::blt(.L_802714F8);
/*802713CC 0026E1CC*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*802713D0 0026E1D0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x58);
/*802713D4 0026E1D4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802713D8 0026E1D8*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802713DC 0026E1DC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802713E0 0026E1E0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f3);
/*802713E4 0026E1E4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802713E8 0026E1E8*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*802713EC 0026E1EC*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802713F0 0026E1F0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f1, context->f0);
/*802713F4 0026E1F4*/ PPC::Runtime::ASM::fmadds(context->f0, context->f6, context->f5, context->f0);
/*802713F8 0026E1F8*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*802713FC 0026E1FC*/ PPC::Runtime::ASM::fmadds(context->f2, context->f1, context->f0, context->f2);
/*80271400 0026E200*/ PPC::Runtime::ASM::fmadds(context->f1, context->f3, context->f0, context->f4);
/*80271404 0026E204*/ PPC::Runtime::ASM::fmadds(context->f0, context->f5, context->f0, context->f6);
/*80271408 0026E208*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8027140C 0026E20C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80271410 0026E210*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80271414 0026E214*/ PPC::Runtime::ASM::bl(fn_80262FDC);
/*80271418 0026E218*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2FC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8027141C 0026E21C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80271420 0026E220*/ PPC::Runtime::ASM::bge(.L_8027143C);
/*80271424 0026E224*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80271428 0026E228*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8027142C 0026E22C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80271430 0026E230*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*80271434 0026E234*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80271438 0026E238*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8027143C, 0x8027143C) //this is a jump label
/*8027143C 0026E23C*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*80271440 0026E240*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80271444 0026E244*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80271448 0026E248*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8027144C 0026E24C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80271450 0026E250*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*80271454 0026E254*/ PPC::Runtime::ASM::fmuls(context->f2, context->f4, context->f1);
/*80271458 0026E258*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8027145C 0026E25C*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80271460 0026E260*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80271464 0026E264*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80271468 0026E268*/ PPC::Runtime::ASM::fmadds(context->f2, context->f5, context->f3, context->f2);
/*8027146C 0026E26C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f5, context->f1, context->f0);
/*80271470 0026E270*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*80271474 0026E274*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80271478 0026E278*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8027147C 0026E27C*/ PPC::Runtime::ASM::fmadds(context->f30, context->f4, context->f3, context->f2);
/*80271480 0026E280*/ PPC::Runtime::ASM::fmadds(context->f31, context->f4, context->f1, context->f0);
/*80271484 0026E284*/ PPC::Runtime::ASM::bl(fn_80276650);
/*80271488 0026E288*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8027148C 0026E28C*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80271490 0026E290*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*80271494 0026E294*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80271498 0026E298*/ PPC::Runtime::ASM::xoris(context->r5, context->r4, 0x8000);
/*8027149C 0026E29C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3080 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802714A0 0026E2A0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*802714A4 0026E2A4*/ PPC::Runtime::ASM::li(context->r4, 0x80);
/*802714A8 0026E2A8*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*802714AC 0026E2AC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*802714B0 0026E2B0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*802714B4 0026E2B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*802714B8 0026E2B8*/ PPC::Runtime::ASM::fmuls(context->f30, context->f30, context->f0);
/*802714BC 0026E2BC*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*802714C0 0026E2C0*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*802714C4 0026E2C4*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f30);
/*802714C8 0026E2C8*/ PPC::Runtime::ASM::fmuls(context->f31, context->f31, context->f1);
/*802714CC 0026E2CC*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*802714D0 0026E2D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*802714D4 0026E2D4*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r0, 24);
/*802714D8 0026E2D8*/ PPC::Runtime::ASM::bl(fn_80276050);
/*802714DC 0026E2DC*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f31);
/*802714E0 0026E2E0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802714E4 0026E2E4*/ PPC::Runtime::ASM::li(context->r4, 0x81);
/*802714E8 0026E2E8*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*802714EC 0026E2EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*802714F0 0026E2F0*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r0, 24);
/*802714F4 0026E2F4*/ PPC::Runtime::ASM::bl(fn_80276050);
RUNTIME_PPC_JUMP_LABEL(.L_802714F8, 0x802714F8) //this is a jump label
/*802714F8 0026E2F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r30));
/*802714FC 0026E2FC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80271500 0026E300*/ PPC::Runtime::ASM::beq(.L_80271544);
/*80271504 0026E304*/ PPC::Runtime::ASM::beq(.L_80271534);
/*80271508 0026E308*/ PPC::Runtime::ASM::bl(fn_801C7DA4);
/*8027150C 0026E30C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80271510 0026E310*/ PPC::Runtime::ASM::bne(.L_80271524);
/*80271514 0026E314*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r30));
/*80271518 0026E318*/ PPC::Runtime::ASM::bl(fn_801C7D94);
/*8027151C 0026E31C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80271520 0026E320*/ PPC::Runtime::ASM::beq(.L_8027152C);
RUNTIME_PPC_JUMP_LABEL(.L_80271524, 0x80271524) //this is a jump label
/*80271524 0026E324*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80271528 0026E328*/ PPC::Runtime::ASM::b(.L_80271538);
RUNTIME_PPC_JUMP_LABEL(.L_8027152C, 0x8027152C) //this is a jump label
/*8027152C 0026E32C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80271530 0026E330*/ PPC::Runtime::ASM::b(.L_80271538);
RUNTIME_PPC_JUMP_LABEL(.L_80271534, 0x80271534) //this is a jump label
/*80271534 0026E334*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80271538, 0x80271538) //this is a jump label
/*80271538 0026E338*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*8027153C 0026E33C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/*80271540 0026E340*/ PPC::Runtime::ASM::b(.L_8027156C);
RUNTIME_PPC_JUMP_LABEL(.L_80271544, 0x80271544) //this is a jump label
/*80271544 0026E344*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*80271548 0026E348*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x70);
/*8027154C 0026E34C*/ PPC::Runtime::ASM::beq(.L_80271560);
/*80271550 0026E350*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x77);
/*80271554 0026E354*/ PPC::Runtime::ASM::beq(.L_80271560);
/*80271558 0026E358*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7c);
/*8027155C 0026E35C*/ PPC::Runtime::ASM::bne(.L_80271568);
RUNTIME_PPC_JUMP_LABEL(.L_80271560, 0x80271560) //this is a jump label
/*80271560 0026E360*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80271564 0026E364*/ PPC::Runtime::ASM::b(.L_8027156C);
RUNTIME_PPC_JUMP_LABEL(.L_80271568, 0x80271568) //this is a jump label
/*80271568 0026E368*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8027156C, 0x8027156C) //this is a jump label
/*8027156C 0026E36C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80271570 0026E370*/ PPC::Runtime::ASM::beq(.L_8027157C);
/*80271574 0026E374*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80271578 0026E378*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8027157C, 0x8027157C) //this is a jump label
/*8027157C 0026E37C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1)0, context->qr0);
/*80271580 0026E380*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*80271584 0026E384*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1)0, context->qr0);
/*80271588 0026E388*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*8027158C 0026E38C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r1));
/*80271590 0026E390*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1));
/*80271594 0026E394*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*80271598 0026E398*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*8027159C 0026E39C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802715A0 0026E3A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xe0);
/*802715A4 0026E3A4*/ PPC::Runtime::ASM::blr();
}